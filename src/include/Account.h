#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

using namespace std;

class account{
    friend inline ostream &operator<<(ostream &os, account &obj);
    public:
    virtual void print(ostream &os) = 0;
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
};

ostream &operator<<(ostream &os, account &obj){
    obj.print(os);
    return os;
}


class standard : public account{
    
    protected:
    std::string name;
    double balance;

    public:
    
    standard(string name = "Unnamed Account", double amount = 0.0) : name{name}, balance{amount} {}
    virtual void            print(ostream &os)      override;
    virtual bool            deposit(double amount)  override;
    virtual bool            withdraw(double amount) override;
    virtual std::string     getName() {return name;}
    virtual void            rename(std::string reName) {name = reName;}
    virtual ~standard() {}


};

class savings: public standard{

    protected:
    double intRate{};

    public:
    
    savings(std::string name = "Unnamed Account", double amount = 0.0, double intRate = 0.0) : standard(name, amount), intRate{intRate} {}
    virtual bool deposit(double amount) override;
    virtual void print(ostream &os) override;
    virtual ~savings() {}
};

class checking: public standard{

    protected:
    const double fee{1.50};

    public:
   
    checking(std::string name = "Unnamed Account", double amount = 0.0) : standard(name, amount) {}
    virtual bool withdraw(double amount) override;
    virtual void print(ostream &os) override;
    virtual ~checking() {}
};

class trust: public savings{

    protected:
    const double bonus{50.0};
    const double bonusVal{5000.0};
    
    const int withdrawalMax{3};
    const int withdrawPercentageMax{20};

    public:
    static int withdrawalCount;
    trust(string name = "Unnamed Account", double amount = 0.0, double intRate = 0.0) : savings(name, amount, intRate) {}
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    virtual void print(ostream &os) override;
    virtual ~trust() {}

};

#endif // !_ACCOUNT_H_
