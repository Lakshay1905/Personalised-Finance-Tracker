#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account
{
private:
    std::string name;
    double balance;

public:
    Account(const std::string &name, double balance);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
    std::string getName() const;
};

#endif // ACCOUNT_H
