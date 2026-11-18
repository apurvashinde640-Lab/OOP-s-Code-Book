#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maximum(T a, T b)
{
    return a < b ? b : a;
}

int main()
{
    cout << maximum(4, 9) << '\n';

    cout << maximum<double>(4, 9.5) << '\n';

    cout << maximum(string("Apple"), string("Pear")) << '\n';

    return 0;
}