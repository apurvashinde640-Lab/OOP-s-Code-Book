
#include <iostream>
using namespace std;

template <typename T>
class Box
{
    T value;

public:
    Box(T v)
    {
        value = v;
    }

    T get() const
    {
        return value;
    }
};

int main()
{
    Box<int> count(42);
    Box<double> price(19.5);

    cout << count.get() << '\n';
    cout << price.get() << '\n';

    return 0;
}
