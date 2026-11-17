#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main()
{
    vector<int> marks{80, 90};

    try
    {
        cout << marks.at(5) << '\n';
    }
    catch (const out_of_range&)
    {
        cout << "Invalid index\n";
    }

    return 0;
}