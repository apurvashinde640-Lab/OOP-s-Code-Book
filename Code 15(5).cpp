#include <array>
#include <cstddef>
#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T, size_t N = 3>
class Stack
{
    static_assert(N > 0, "Capacity must be positive");

    array<T, N> data{};
    size_t used = 0;

public:
    void push(const T& value)
    {
        if (used == N)
            throw overflow_error("Stack full");

        data[used] = value;
        ++used;
    }

    T pop()
    {
        if (used == 0)
            throw underflow_error("Stack empty");

        T result = data[used - 1];

        --used;

        return result;
    }

    size_t size() const noexcept
    {
        return used;
    }
};

int main()
{
    Stack<int, 2> stack;

    try
    {
        stack.push(10);
        stack.push(20);
        stack.push(30);
    }
    catch (const overflow_error& e)
    {
        cout << e.what() << '\n';
    }

    try
    {
        cout << stack.pop() << '\n';
        cout << stack.pop() << '\n';

        stack.pop();
    }
    catch (const underflow_error& e)
    {
        cout << e.what() << '\n';
    }

    return 0;
}