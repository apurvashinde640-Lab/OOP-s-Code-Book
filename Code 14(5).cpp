#include <iomanip>
#include <iostream>
using namespace std;

template <typename T>
inline constexpr T pi =
    static_cast<T>(3.14159265358979323846L);

int main()
{
    cout << fixed << setprecision(2);

    cout << pi<double> * 4.0 << '\n';

    cout << pi<int> << '\n';

    return 0;
}