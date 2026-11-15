#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double a, double b)
{
    if (b == 0)
        throw invalid_argument("Zero denominator");

    return a / b;
}

int main()
{
    for (double divisor : {2.0, 0.0})
    {
        try
        {
            cout << divide(10, divisor) << '\n';
        }
        catch (const invalid_argument& e)
        {
            cout << e.what() << '\n';
        }
    }

    return 0;
}