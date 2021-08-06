#include "Account_util.h"

//For the Account Class
void display(vector<account> &accounts, size_t accountChoice)
{
    cout << accounts[accountChoice] << endl;
}

void deposit(vector<account> &accounts, double amount, size_t accountChoice)
{
    if((accounts[accountChoice]).deposit(amount))
    {
        cout << "Deposited to " << (accounts[accountChoice]).getName() << " Successfully" << endl;
    }else{
        cout << "Deposit Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}

void withdraw(vector<account> &accounts, double amount, size_t accountChoice)
{
    if((accounts[accountChoice]).withdraw(amount))
    {
        cout << "Successfully Withdrawn to Account " << (accounts[accountChoice]).getName() << endl;
    }else{
        cout << "Withdraw Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}

//For the Savings Account Class
void display(vector<savingsAccount> &accounts, size_t accountChoice)
{
    cout << accounts[accountChoice] << endl;
}

void deposit(vector<savingsAccount> &accounts, double amount, size_t accountChoice)
{
    if((accounts[accountChoice]).deposit(amount))
    {
        cout << "Deposited to " << (accounts[accountChoice]).getName() << " Successfully" << endl;
    }else{
        cout << "Deposit Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}

void withdraw(vector<savingsAccount> &accounts, double amount, size_t accountChoice)
{
    if((accounts[accountChoice]).withdraw(amount))
    {
        cout << "Successfully Withdrawn to Account " << (accounts[accountChoice]).getName() << endl;
    }else{
        cout << "Withdraw Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}

//For the Checking Account Class
void display(vector<checkingAccount> &accounts, size_t accountChoice)
{
    cout << accounts[accountChoice] << endl;
}

void deposit(vector<checkingAccount> &accounts, double amount, size_t accountChoice)
{
    if((accounts[accountChoice]).deposit(amount))
    {
        cout << "Deposited to " << (accounts[accountChoice]).getName() << " Successfully" << endl;
    }else{
        cout << "Deposit Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}

void withdraw(vector<checkingAccount> &accounts, double amount, size_t accountChoice)
{
   if((accounts[accountChoice]).withdraw(amount))
    {
        cout << "Successfully Withdrawn to Account " << (accounts[accountChoice]).getName() << endl;
    }else{
        cout << "Withdraw Failed to Account " << (accounts[accountChoice]).getName() << endl;
    } 
}

//For the Trust Account Class
void display(vector<trustAccount> &accounts, size_t accountChoice)
{
    cout << accounts[accountChoice] << endl;
}

void deposit(vector<trustAccount> &accounts, double amount, size_t accountChoice)
{
    if((accounts[accountChoice]).deposit(amount))
    {
        cout << "Deposited to " << (accounts[accountChoice]).getName() << " Successfully" << endl;
    }else{
        cout << "Deposit Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}

void withdraw(vector<trustAccount> &accounts, double amount, size_t accountChoice)
{
    if((accounts[accountChoice]).withdraw(amount))
    {
        cout << "Successfully Withdrawn to Account " << (accounts[accountChoice]).getName() << endl;
    }else{
        cout << "Withdraw Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}