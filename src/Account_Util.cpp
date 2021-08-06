#include "include/Account_Util.h"

void display(vector<standard> &accounts, size_t accountChoice)
{
    cout << accounts[accountChoice] << endl;
}

void deposit(vector<standard> &accounts, double amount, size_t accountChoice){
    if((accounts[accountChoice]).deposit(amount))
    {
        cout << "Deposited to " << (accounts[accountChoice]).getName() << " Successfully" << endl;
    }else{
        cout << "Deposit Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}

void withdraw(vector<standard> &accounts, double amount, size_t accountChoice){
    if((accounts[accountChoice]).withdraw(amount))
    {
        cout << "Successfully Withdrawn to Account " << (accounts[accountChoice]).getName() << endl;
    }else{
        cout << "Withdraw Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}

void display(vector<checking> &accounts, size_t accountChoice){
    cout << accounts[accountChoice] << endl;
}
void withdraw(vector<checking> &accounts, double amount, size_t accountChoice){
    if((accounts[accountChoice]).withdraw(amount))
    {
        cout << "Successfully Withdrawn to Account " << (accounts[accountChoice]).getName() << endl;
    }else{
        cout << "Withdraw Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}
void deposit(vector<checking> &accounts, double amount, size_t accountChoice){
    if((accounts[accountChoice]).deposit(amount))
    {
        cout << "Deposited to " << (accounts[accountChoice]).getName() << " Successfully" << endl;
    }else{
        cout << "Deposit Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}

void display(vector<savings> &accounts, size_t accountChoice){
    cout << accounts[accountChoice] << endl;
}
void withdraw(vector<savings> &accounts, double amount, size_t accountChoice){
    if((accounts[accountChoice]).withdraw(amount))
    {
        cout << "Successfully Withdrawn to Account " << (accounts[accountChoice]).getName() << endl;
    }else{
        cout << "Withdraw Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}
void deposit(vector<savings> &accounts, double amount, size_t accountChoice){
    if((accounts[accountChoice]).deposit(amount))
    {
        cout << "Deposited to " << (accounts[accountChoice]).getName() << " Successfully" << endl;
    }else{
        cout << "Deposit Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}

void display(vector<trust> &accounts, size_t accountChoice){
    cout << accounts[accountChoice] << endl;
}
void withdraw(vector<trust> &accounts, double amount, size_t accountChoice){
    if((accounts[accountChoice]).withdraw(amount))
    {
        cout << "Successfully Withdrawn to Account " << (accounts[accountChoice]).getName() << endl;
    }else{
        cout << "Withdraw Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}
void deposit(vector<trust> &accounts, double amount, size_t accountChoice){
    if((accounts[accountChoice]).deposit(amount))
    {
        cout << "Deposited to " << (accounts[accountChoice]).getName() << " Successfully" << endl;
    }else{
        cout << "Deposit Failed to Account " << (accounts[accountChoice]).getName() << endl;
    }
}