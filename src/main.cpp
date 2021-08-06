#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "include/Account.h"
#include "include/Account_util.h"

/*
                            WELCOME
    this is one of my practice projects where i will use as my reference for my future jobs
*/

using namespace std;


//Functions Used in the Program
//it should be pretty self-explanatory

void mainMenu();
void newAccount();
void displayAccounts();
void displayAccountType();
void displayStandard();
void displaySavings();
void displayChecking();
void displayTrust();

//except this lmao
void displayLine(){
    cout << setw(27) << setfill('=') << "" << endl;
    cout << setfill(' ');
}


void renameStandard(vector<standard> &acc, string name, size_t select);
void renameSavings(vector<savings> &acc, string name, size_t select);
void renameChecking(vector<checking> &acc, string name, size_t select);
void renameTrust(vector<trust> &acc, string name, size_t select);


//Collection of Accounts used as a Global Variables
//The reason for this is so that the functions could determine an if and else logic
//in short im too lazy to implement them in the main lmao
vector<standard>    acc1;
vector<savings>     acc2;
vector<checking>    acc3;
vector<trust>       acc4;


/************************************************************************************
IF You are reading this documentation (I hope you're not reading the entire codebase) 
i lost almost 99.9% of braincells making this program
*************************************************************************************/


//Main Function Where the Pain and suffering starts
int main()
{
    int selection;
    size_t accountSelect;


    //Program's Main Loop
    while(selection != 0)
    {
        mainMenu();
        cout << "(0)Exit Program" << endl;
        displayLine();
        cout << "Choice: ";
        cin >> selection;
        system("Pause");
        system("CLS");
        switch(selection)
        {
            case 1:{
                int accselec;
                char choice;
                newAccount();
                displayLine();
                cout << "Choice: ";
                cin >> accselec;
                system("Pause");
                system("CLS");
                switch(accselec)
                {
                    case 1:{
                        string name;
                        double  initbal;
                        char choice;
                        cout << "Input Your Name: ";
                        cin >> name;
                        
                        
                            cout << "Do You want to Add balance Immediately? (Y/N): ";
                            cin >> choice;
                            tolower(choice); 
                            if(choice == 'y')
                            {
                                cout << "Enter Balance: ";
                                cin >> initbal;
                                system("Pause");
                            }else if(choice == 'n')
                            {
                                initbal = 0.0;
                            }else{
                                cout << "Invalid Choice!" << endl;
                                system("Pause");
                                system("CLS");
                                break;
                            }
                        

                        acc1.push_back(standard{name, initbal});
                        break;
                    }
                    case 2:{
                        string name;
                        double initbal;
                        double initRate;
                        char choice;
                        cout << "Input Your Name: ";
                        cin >> name;
                            cout << "Do You want to Add balance and Interest Rate Immediately? (Y/N): ";
                            cin >> choice;
                            tolower(choice); 
                            if(choice == 'y')
                            {
                                cout << "Enter Balance: ";
                                cin >> initbal;
                                cout << "Enter The Interest Rate: ";
                                cin >> initRate;
                                system("Pause");
                            }else if(choice == 'n')
                            {
                                initbal = 0.0;
                            }else{
                                system("Pause");
                                system("CLS");
                                break;
                            }
                        
                        acc2.push_back(savings{name, initbal, initRate}); 
                        break;
                    }

                    case 3:{
                        string name;
                        double  initbal;
                        char choice;
                        cout << "Input Your Name: ";
                        cin >> name;
                        
                        
                            cout << "Do You want to Add balance Immediately? (Y/N): ";
                            cin >> choice;
                            tolower(choice); 
                            if(choice == 'y')
                            {
                                cout << "Enter Balance: ";
                                cin >> initbal;
                                system("Pause");
                            }else if(choice == 'n')
                            {
                                initbal = 0.0;
                            }else{
                                cout << "Invalid Choice!" << endl;
                                system("Pause");
                                system("CLS");
                                break;
                            }
                        
                        acc3.push_back(checking{name, initbal}); 
                        break;
                    }
                    case 4:{
                        string name;
                        double initbal;
                        double initRate;
                        char choice;
                        cout << "Input Your Name: ";
                        cin >> name;

                        
                            cout << "Do You want to Add balance and Interest Rate Immediately? (Y/N): ";
                            cin >> choice;
                            tolower(choice); 
                            if(choice == 'y')
                            {
                                cout << "Enter Balance: ";
                                cin >> initbal;
                                cout << "Enter The Interest Rate: ";
                                cin >> initRate;
                                system("Pause");
                            }else if(choice == 'n')
                            {
                                initbal = 0.0;
                            }else{
                                cout << "Invalid Choice!" << endl;
                                system("Pause");
                                system("CLS");
                                break;
                            }
                         
                        acc4.push_back(trust{name, initbal, initRate});
                        break;
                    }
                }
                system("CLS");
                break;
            }
            //NOTE: In Order to Rename, Deposit, or Withdraw an Account The User Must Choose an Account So That Means Display Every available account but display it thru the getName() method
            case 2:{
                int m;
                cout << "Select an Account Type" << endl;
                displayAccountType();
                displayLine();
                cout << "Choice: ";
                cin >> m;
                switch(m)
                {
                    case 1:{
                        system("Pause");
                        system("CLS");
                        size_t c;
                        string newName;
                        displayStandard();
                        displayLine();
                        cout << "Choice: ";
                        cin >> c;
                        --c;
                        if(c > acc1.size())
                        {
                            cerr << "Input Doesnt Exist Please Try Again" << endl;
                            break;
                        }
                        system("Pause");
                        system("CLS");
                        cout << "Enter Name: ";
                        cin >> newName;
                        renameStandard(acc1, newName, c);
                        system("Pause");
                        break;
                    }
                    case 2:{
                        system("Pause");
                        system("CLS");
                        size_t c;
                        string newName;
                        displaySavings();
                        displayLine();
                        cout << "Choice: ";
                        cin >> c;
                        --c;
                        if(c > acc2.size())
                        {
                            cerr << "Input Doesnt Exist Please Try Again" << endl;
                            break;
                        }
                        system("Pause");
                        system("CLS");
                        cout << "Enter Name: ";
                        cin >> newName;
                        renameSavings(acc2, newName, c);
                        system("Pause");
                        break;
                    }
                    case 3:{
                        system("Pause");
                        system("CLS");
                        size_t c;
                        string newName;
                        displayChecking();
                        displayLine();
                        cout << "Choice: ";
                        cin >> c;
                        --c;
                        if(c > acc2.size())
                        {
                            cerr << "Input Doesnt Exist Please Try Again" << endl;
                            break;
                        }
                        system("Pause");
                        system("CLS");
                        cout << "Enter Name: ";
                        cin >> newName;
                        renameChecking(acc3, newName, c);
                        system("Pause");
                        break;
                    }
                    case 4:{
                        system("Pause");
                        system("CLS");
                        size_t c;
                        string newName;
                        displayTrust();
                        displayLine();
                        cout << "Choice: ";
                        cin >> c;
                        --c;
                        if(c > acc2.size())
                        {
                            cerr << "Input Doesnt Exist Please Try Again" << endl;
                            break;
                        }
                        system("Pause");
                        system("CLS");
                        cout << "Enter Name: ";
                        cin >> newName;
                        renameTrust(acc4, newName, c);
                        system("Pause");
                        break;
                    }
                    default:{
                        cerr << "ILLEGAL INPUT" << endl;
                        system("Pause");
                    }
                }
                system("CLS");
                break;
            }
            case 3:{
                int m;
                cout << "Select an Account Type" << endl;
                displayAccountType();
                displayLine();
                cout << "Choice: ";
                cin >> m;
                switch(m)
                {
                    case 1:{
                        system("Pause");
                        system("CLS");
                        double amount;
                        size_t c;
                        displayStandard();
                        displayLine();
                        cout << "Choice: ";
                        cin >> c;
                        if(c > acc1.size())
                        {
                            cerr << "Input Doesnt Exist Please Try Again" << endl;
                            break;
                        }
                        system("Pause");
                        system("CLS");
                        --c;
                        cout << "Amount to Deposit: ";
                        cin >> amount;
                        deposit(acc1, amount, c);
                        system("Pause");
                        break;
                    }
                    case 2:{
                        system("Pause");
                        system("CLS");
                        double amount;
                        size_t c;
                        displaySavings();
                        displayLine();
                        cout << "Choice: ";
                        cin >> c;
                        if(c > acc2.size())
                        {
                            cerr << "Input Doesnt Exist Please Try Again" << endl;
                            break;
                        }
                        system("Pause");
                        system("CLS");
                        --c;
                        cout << "Amount to Deposit: ";
                        cin >> amount;
                        deposit(acc2, amount, c);
                        system("Pause");
                        break;
                    }
                    case 3:{
                        system("Pause");
                        system("CLS");
                        double amount;
                        size_t c;
                        displayChecking();
                        displayLine();
                        cout << "Choice: ";
                        cin >> c;
                        if(c > acc3.size())
                        {
                            cerr << "Input Doesnt Exist Please Try Again" << endl;
                            break;
                        }
                        system("Pause");
                        system("CLS");
                        --c;
                        cout << "Amount to Deposit: ";
                        cin >> amount;
                        deposit(acc3, amount, c);
                        system("Pause");
                        break;
                    }
                    case 4:{
                        system("Pause");
                        system("CLS");
                        double amount;
                        size_t c;
                        displayTrust();
                        displayLine();
                        cout << "Choice: ";
                        cin >> c;
                        if(c > acc4.size())
                        {
                            cerr << "Input Doesnt Exist Please Try Again" << endl;
                            break;
                        }
                        system("Pause");
                        system("CLS");
                        --c;
                        cout << "Amount to Deposit: ";
                        cin >> amount;
                        deposit(acc4, amount, c);
                        system("Pause");
                        break;
                    }
                    default:{
                        cerr << "Invalid Input!" << endl;
                    }
                }
                system("CLS");
                break;
            }
            case 4:{
                int m;
                cout << "Select an Account Type" << endl;
                displayAccountType();
                displayLine();
                cout << "Choice: ";
                cin >> m;
                switch(m)
                {
                    case 1:{
                        system("Pause");
                        system("CLS");
                        double amount;
                        size_t c;
                        displayStandard();
                        displayLine();
                        cout << "Choice: ";
                        cin >> c;
                        if(c > acc1.size())
                        {
                            cerr << "Input Doesnt Exist Please Try Again" << endl;
                            break;
                        }
                        system("Pause");
                        system("CLS");
                        --c;
                        cout << "Amount to withdraw: ";
                        cin >> amount;
                        withdraw(acc1, amount, c);
                        system("Pause");
                        break;
                    }
                    case 2:{
                        system("Pause");
                        system("CLS");
                        double amount;
                        size_t c;
                        displaySavings();
                        displayLine();
                        cout << "Choice: ";
                        cin >> c;
                        if(c > acc2.size())
                        {
                            cerr << "Input Doesnt Exist Please Try Again" << endl;
                            break;
                        }
                        system("Pause");
                        system("CLS");
                        --c;
                        cout << "Amount to withdraw: ";
                        cin >> amount;
                        withdraw(acc2, amount, c);
                        system("Pause");
                        break;
                    }
                    case 3:{
                        system("Pause");
                        system("CLS");
                        double amount;
                        size_t c;
                        displayChecking();
                        displayLine();
                        cout << "Choice: ";
                        cin >> c;
                        if(c > acc3.size())
                        {
                            cerr << "Input Doesnt Exist Please Try Again" << endl;
                            break;
                        }
                        system("Pause");
                        system("CLS");
                        --c;
                        cout << "Amount to withdraw: ";
                        cin >> amount;
                        withdraw(acc3, amount, c);
                        system("Pause");
                        break;
                    }
                    case 4:{
                        system("Pause");
                        system("CLS");
                        double amount;
                        size_t c;
                        displayTrust();
                        displayLine();
                        cout << "Choice: ";
                        cin >> c;
                        if(c > acc4.size())
                        {
                            cerr << "Input Doesnt Exist Please Try Again" << endl;
                            break;
                        }
                        system("Pause");
                        system("CLS");
                        --c;
                        cout << "Amount to withdraw: ";
                        cin >> amount;
                        withdraw(acc4, amount, c);
                        system("Pause");
                        break;
                    }
                    default:{
                        cerr << "Invalid Input!" << endl;
                    }
                }
                system("CLS");
                
                break;
            }
            case 5:{
                displayAccounts();
                system("Pause");
                system("CLS");
                break;
            }
            case 0:{
                cout << "GOODBYE!" << endl;
                system("Pause");
            }
        }
    }

    //I'm not gonna explain everything in main lmao
    return 0;
}


/*
    The Function Implementations
*/
void displayAccounts(){
    cout << "For Standard Account" << endl;
        if(acc1.size() == 0){
            cout << "=================" << endl;
            cout << "None" << endl;
                    cout << "=================" << endl;
            }else{
                for(auto &acc: acc1){
                    cout << "=================" << endl;
                    cout << acc << endl;
                    cout << "=================" << endl;
                    }
                }
            cout << endl;
            cout << "For Savings Account" << endl;
            if(acc2.size() == 0){
                cout << "=================" << endl;
                cout << "None" << endl;
                cout << "=================" << endl;
            }else{
                    for(auto &acc: acc2){
                        cout << "=================" << endl;
                        cout << acc << endl;
                        cout << "=================" << endl;
                    }
                }
                cout << endl;
                cout << "For Checking Account" << endl;
                if(acc3.size() == 0){
                    cout << "=================" << endl;
                    cout << "None" << endl;
                    cout << "=================" << endl;
                }else{
                    for(auto &acc: acc3){
                        cout << "=================" << endl;
                        cout << acc << endl;
                        cout << "=================" << endl;
                    }
                }
                cout << endl;
                cout << "For Trust Account" << endl;
                if(acc4.size() == 0){
                    cout << "=================" << endl;
                    cout << "None" << endl;
                    cout << "=================" << endl;
                }else{
                    for(auto &acc: acc4){
                        cout << "=================" << endl;
                        cout << acc << endl;
                        cout << "=================" << endl;
                    }
                }
}

void mainMenu()
{
    cout << "B\tA\tN\tK" << endl;
    displayLine();
    if(acc1.size() == 0 && acc2.size() == 0 && acc3.size() == 0 && acc4.size() == 0)
    {
        cout << "Please Create an Account to proceed" << endl;
        cout << "(1)Create New Account" << endl;
    }else{
    cout << "(1)Create New Account" << endl;
    cout << "(2)Rename Account" << endl;
    cout << "(3)Deposit Account" << endl;
    cout << "(4)Withdraw Account" << endl;
    cout << "(5)Display Account" << endl;
    }
    

}

void newAccount()
{
    cout << "Creating The Account" << endl;
    cout << "Please Choose the type of an Account" << endl;
    displayLine();
    cout << "(1)Standard Account" << endl;
    cout << "(2)Savings Account" << endl;
    cout << "(3)Checking Account" << endl;
    cout << "(4)Trust Account" << endl;
}

void displayAccountType(){
    cout << "(1)Standard Account" << endl;
    cout << "(2)Savings Account" << endl;
    cout << "(3)Checking Account" << endl;
    cout << "(4)Trust Account" << endl;
}

void displayStandard(){
    if(acc1.size() == 0)
    {
        cout << "Null" << endl;
    }else{
        int i{1};
        for(auto &acc: acc1)
        {

            cout << '(' << i++ << ')' << acc.getName() << endl;
        }
    }
}

void displaySavings(){
    if(acc2.size() == 0)
    {
        cout << "Null" << endl;
    }else{
        int i{1};
        for(auto &acc: acc2)
        {

            cout << '(' << i++ << ')' << acc.getName() << endl;
        }
    }
}

void displayChecking(){
    if(acc3.size() == 0)
    {
        cout << "Null" << endl;
    }else{
        int i{1};
        for(auto &acc: acc3)
        {

            cout << '(' << i++ << ')' << acc.getName() << endl;
        }
    }
}

void displayTrust(){
    if(acc4.size() == 0)
    {
        cout << "Null" << endl;
    }else{
        int i{1};
        for(auto &acc: acc4)
        {

            cout << '(' << i++ << ')' << acc.getName() << endl;
        }
    }
}

void renameStandard(vector<standard> &acc, string name, size_t select){
    acc.at(select).rename(name);
    cout << "Account Successfully renamed to " << acc.at(select).getName() << endl;
}
void renameSavings(vector<savings> &acc, string name, size_t select){
    acc.at(select).rename(name);
    cout << "Account Successfully renamed to " << acc.at(select).getName() << endl;
}
void renameChecking(vector<checking> &acc, string name, size_t select){
    acc.at(select).rename(name);
    cout << "Account Successfully renamed to " << acc.at(select).getName() << endl;
}
void renameTrust(vector<trust> &acc, string name, size_t select){
    acc.at(select).rename(name);
    cout << "Account Successfully renamed to " << acc.at(select).getName() << endl;
}

/*
DISCLAIMER: The Code Below This Message is Just For testing Purposes only

Just incase if i modify something or added a feature on this program i might use the following code below

*/

// int main()
// {
//     //Account Works!!!
//     acc1.push_back(standard{"Jeff", 1000});
//     display(acc1, 0);
//     deposit(acc1, 1000, 0);
//     display(acc1, 0);
//     withdraw(acc1, 500, 0);
//     display(acc1, 0);
//     system("Pause");
//     system("CLS");
//     cout << "==================================" << endl;
//     acc2.push_back(savings{"Mark", 1000, 5.0});
//     display(acc2, 0);
//     deposit(acc2, 1000, 0);
//     display(acc2, 0);
//     withdraw(acc2, 500, 0);
//     display(acc2, 0);
//     system("Pause");
//     system("CLS");
//     cout << "==================================" << endl;
//     acc3.push_back(checking{"Joss", 1000});
//     display(acc3, 0);
//     deposit(acc3, 1000, 0);
//     display(acc3, 0);
//     withdraw(acc3, 500, 0);
//     display(acc3, 0);
//     system("Pause");
//     system("CLS");
//     cout << "==================================" << endl;
//     acc4.push_back(trust{"Den", 1000, 5.0});
//     display(acc4, 0);
//     deposit(acc4, 1000, 0);
//     display(acc4, 0);
//     withdraw(acc4, 500, 0);
//     display(acc4, 0);
//     system("Pause");
//     system("CLS");

//     return 0;
// }