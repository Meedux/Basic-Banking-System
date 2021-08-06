#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include "Account.h"
#include <iostream>
#include <vector>

void display(vector<standard> &accounts, size_t accountChoice);
void withdraw(vector<standard> &accounts, double amount, size_t accountChoice);
void deposit(vector<standard> &accounts, double amount, size_t accountChoice);

void display(vector<checking> &accounts, size_t accountChoice);
void withdraw(vector<checking> &accounts, double amount, size_t accountChoice);
void deposit(vector<checking> &accounts, double amount, size_t accountChoice);

void display(vector<savings> &accounts, size_t accountChoice);
void withdraw(vector<savings> &accounts, double amount, size_t accountChoice);
void deposit(vector<savings> &accounts, double amount, size_t accountChoice);

void display(vector<trust> &accounts, size_t accountChoice);
void withdraw(vector<trust> &accounts, double amount, size_t accountChoice);
void deposit(vector<trust> &accounts, double amount, size_t accountChoice);



#endif