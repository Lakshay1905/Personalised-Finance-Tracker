#include "Account.h"
#include <stdexcept>

Account::Account(const std::string &name, double balance) : name(name), balance(balance) {}

void Account::deposit(double amount)
{
    if (amount < 0)
    {
        throw std::invalid_argument("Deposit amount must be positive.");
    }
    balance += amount;
}

void Account::withdraw(double amount)
{
    if (amount < 0)
    {
        throw std::invalid_argument("Withdrawal amount must be positive.");
    }
    if (amount > balance)
    {
        throw std::out_of_range("Insufficient funds.");
    }
    balance -= amount;
}

double Account::getBalance() const
{
    return balance;
}

std::string Account::getName() const
{
    return name;
}
