#include <iostream>
using namespace std;

int main()
{
    for (int option : {1, 2, 3})
    {
        try
        {
            if (option == 1)
                throw 7;

            if (option == 2)
                throw 2.5;

            throw "Other failure";
        }
        catch (int n)
        {
            cout << "Integer: " << n << '\n';
        }
        catch (double n)
        {
            cout << "Double: " << n << '\n';
        }
        catch (...)
        {
            cout << "Other exception\n";
        }
    }

    return 0;
}