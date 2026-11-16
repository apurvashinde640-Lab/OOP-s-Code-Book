#include <iostream>
#include <stdexcept>
using namespace std;

void validate(int marks)
{
    if (marks < 0 || marks > 100)
        throw out_of_range("Marks outside 0..100");
}

int main()
{
    for (int marks : {80, 120})
    {
        try
        {
            validate(marks);
            cout << "Valid: " << marks << '\n';
        }
        catch (const exception& e)
        {
            cout << e.what() << '\n';
        }
    }

    return 0;
}