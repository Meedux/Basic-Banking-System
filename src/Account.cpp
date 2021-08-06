#include "include/Account.h"

//Standard Account

bool account::deposit(double amount){
    return amount;
}

void standard::print(ostream &os) {
    os << "Name: " << name << endl << "Balance: " << balance << endl;
}

bool standard::deposit(double amount){
    if(amount <= 0)
    {
        return false;
    }else{
        balance += amount;
        return true;
    }
}

bool standard::withdraw(double amount){
    if(balance - amount < 0)
    {
        
        return false;
    }
        balance -= amount;
        return true;
    
}

//Savings Account



bool savings::deposit(double amount) {
    amount = amount * (amount * intRate/100);
    return standard::deposit(amount);
}
void savings::print(ostream &os){
    os << "Name: " << name << endl << "Balance: " << balance << endl << "Rate: " << intRate << endl;
}

//Checking Account


bool checking::withdraw(double amount)
{
    amount += fee;
    return standard::withdraw(amount);
}

void checking::print(ostream &os) {
    os << "Name: " << name << endl << "Balance: " << balance << endl << "Fee: " << fee << endl;
}

//Trust Account

int trust::withdrawalCount = 0;

bool trust::deposit(double amount)
{
    if(amount >= bonusVal)
    {
        amount += bonus;
        
    }

    return account::deposit(amount);
}

bool trust::withdraw(double amount)
{
    if(withdrawalCount >= withdrawalMax || amount > balance * withdrawPercentageMax)
    {
        return false;
    }
        ++withdrawalCount;
        return savings::withdraw(amount);

}
void trust::print(ostream &os){
    os << "Name: " << name << endl << "Balance: " << balance << endl << "Bonus: " << bonusVal << endl;
}