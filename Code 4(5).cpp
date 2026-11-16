#include <iostream>
#include <stdexcept>
using namespace std;

class InsufficientBalance : public runtime_error
{
public:
    InsufficientBalance()
        : runtime_error("Insufficient balance") {}
};

class Account
{
    double balance = 1000;

public:
    void withdraw(double amount)
    {
        if (amount <= 0)
            throw invalid_argument("Amount must be positive");

        if (amount > balance)
            throw InsufficientBalance{};

        balance -= amount;
    }

    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    Account a;

    try
    {
        a.withdraw(1500);
    }
    catch (const InsufficientBalance& e)
    {
        cout << e.what() << '\n';
    }
    catch (const exception& e)
    {
        cout << e.what() << '\n';
    }

    cout << "Balance: " << a.getBalance() << '\n';

    return 0;
}