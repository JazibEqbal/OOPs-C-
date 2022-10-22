#include <bits/stdc++.h>
using namespace std;

class Account
{
private:
    string name;
    long long int account_number;
    string type_of_account;
    float balance;

public:
    Account(string Name, long long int ac_number, string account_type, float bal)
    {
        name = Name;
        account_number = ac_number;
        type_of_account = account_type;
        balance = bal;
    }
    void deposit()
    {
        float deposit_amount;
        cout << "Enter amount to be deposited: ";
        cin >> deposit_amount;
        balance += deposit_amount;
    }
    void withdraw()
    {
        float withdraw_amount;
        cout << "Enter amount to withdraw: ";
        cin >> withdraw_amount;
        if (withdraw_amount > balance)
        {
            cout << "Cannot withdraw amount" << endl;
            cout << "Please enter correct amount to withdraw." << endl;
        }
        if (withdraw_amount <= balance)
        {
            balance -= withdraw_amount;
        }
    }
    void display()
    {
        cout << "\n";
        cout << "Account number: " << account_number << endl;
        cout << "Name: " << name << endl;
        cout << "Account type: " << type_of_account << endl;
        cout << "Balance: " << balance << endl;
        cout << "\n";
    }
};

int main()
{
    long long int account_number;
    string name;
    string type_of_account;
    float balance;
    cout << "Enter account number: ";
    cin >> account_number;
    cout << "Enter name: ";
    getline(cin >> ws, name);
    cout << "Enter type of account: ";
    cin >> type_of_account;
    cout << "Balance: ";
    cin >> balance;

    Account a = Account(name, account_number, type_of_account, balance);
    a.deposit();
    a.display();
    a.withdraw();
    a.display();
    return 0;
}