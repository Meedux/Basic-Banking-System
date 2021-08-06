#include "Account.h"

using namespace std;


/**********************Account Class Implementation************************************/
account::account(std::string name, double amount) : name{name}, balance{amount} {}

std::string account::getName()
{
    return name;
}

bool account::deposit(double amount)
{
    if(amount > 0)
    {
        balance += amount;
        return true;
    }
    else{
        return false;
    }
}

bool account::withdraw(double amount)
{
    if(balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else{
        return false;
    }
}

std::ostream &operator<<(std::ostream &os, const account &rhs)
{
    os << "Name: " << rhs.name << endl << "Balance: " << rhs.balance << endl << endl;
    return os;
}


/**********************Savings Account Class Implementation****************************/

savingsAccount::savingsAccount(std::string name, double amount, double rate) : account(name, amount), intRate{rate} {}



bool savingsAccount::deposit(double amount)
{
    amount = amount + (amount * intRate/100);
    return account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const savingsAccount &rhs)
{
    os << "Name: " << rhs.name << endl << "Balance: " << rhs.balance << endl << "Account Rate: " << rhs.intRate << endl << endl;
    return os;
}

/**********************Checking Account Class Implementation***************************/
checkingAccount::checkingAccount(std::string name, double amount): account(name, amount) {}



bool checkingAccount::withdraw(double amount)
{
    amount += fee;
    return account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const checkingAccount &rhs)
{
    os << "Name: " << rhs.name << endl << "Balance: " << rhs.balance << endl << "Fee: " << rhs.fee << endl << endl;
    return os;
}
/**********************Trust Account Class Implementation******************************/
trustAccount::trustAccount(std::string name, double amount, double intRate) : savingsAccount(name, amount, intRate) {}

int trustAccount::withdrawalCount = 0;
bool trustAccount::deposit(double amount)
{
    if(amount >= bonusVal)
    {
        amount += bonus;
        
    }

    return account::deposit(amount);
    
}

bool trustAccount::withdraw(double amount)
{
    if(withdrawalCount >= withdrawalMax || amount > balance * withdrawPercentageMax)
    {
        return false;
    }else{
        ++withdrawalCount;
        return savingsAccount::deposit(amount);
    }
}

std::ostream &operator<<(std::ostream &os, const trustAccount &rhs){
    os << "Name: " << rhs.name << endl << "Balance: " << rhs.balance << endl << "Bonus: " << rhs.bonus << endl << "Max Withdrawal Percentage: " << rhs.withdrawPercentageMax << '%' << endl << endl;
    return os;
}