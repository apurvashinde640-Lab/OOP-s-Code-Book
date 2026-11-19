#include <algorithm>
#include <cstddef>
#include <iostream>
using namespace std;

template <typename T, size_t N>
void sortValues(T (&a)[N])
{
    sort(a, a + N);
}

int main()
{
    int values[]{3, 1, 2};
    double readings[]{2.5, 1.5};

    sortValues(values);
    sortValues(readings);

    for (int n : values)
        cout << n << ' ';

    cout << '\n';

    for (double n : readings)
        cout << n << ' ';

    cout << '\n';

    return 0;
}