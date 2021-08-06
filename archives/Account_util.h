#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include "Account.h"
#include <vector>

using namespace std;

//For the Account Class
void display(vector<account> &accounts, size_t accountChoice);
void deposit(vector<account> &accounts, double amount, size_t accountChoice);
void withdraw(vector<account> &accounts, double amount, size_t accountChoice);

//For the Savings Account Class
void display(vector<savingsAccount> &accounts, size_t accountChoice);
void deposit(vector<savingsAccount> &accounts, double amount, size_t accountChoice);
void withdraw(vector<savingsAccount> &accounts, double amount, size_t accountChoice);

//For the Checking Account Class
void display(vector<checkingAccount> &accounts, size_t accountChoice);
void deposit(vector<checkingAccount> &accounts, double amount, size_t accountChoice);
void withdraw(vector<checkingAccount> &accounts, double amount, size_t accountChoice);

//For the Trust Account class
void display(vector<trustAccount> &accounts, size_t accountChoice);
void deposit(vector<trustAccount> &accounts, double amount, size_t accountChoice);
void withdraw(vector<trustAccount> &accounts, double amount, size_t accountChoice);



#endif //  _ACCOUNT_UTIL_H_
