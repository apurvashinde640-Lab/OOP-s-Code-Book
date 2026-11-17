#include <iostream>
#include <stdexcept>
using namespace std;

class Guard
{
public:
    Guard()
    {
        cout << "Acquire\n";
    }

    ~Guard()
    {
        cout << "Release\n";
    }
};

void worker()
{
    Guard g;
    throw runtime_error("Worker failed");
}

void service()
{
    try
    {
        worker();
    }
    catch (const exception&)
    {
        cout << "Logged\n";
        throw;
    }
}

int main()
{
    try
    {
        service();
    }
    catch (const exception& e)
    {
        cout << e.what() << '\n';
    }

    return 0;
}
