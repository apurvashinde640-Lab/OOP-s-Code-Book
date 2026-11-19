#include <iostream>
#include <string>
using namespace std;

template <typename T = int>
class Box
{
    T value;

public:
    explicit Box(T v) : value(v) {}

    const T& get() const
    {
        return value;
    }
};

int main()
{
    Box<> count(10);
    Box<string> name("Neha");

    cout << count.get() << '\n';
    cout << name.get() << '\n';

    return 0;
}