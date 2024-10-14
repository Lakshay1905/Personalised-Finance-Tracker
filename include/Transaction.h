#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <ctime>

class Transaction
{
private:
    std::string description;
    double amount;
    std::time_t timestamp;

public:
    Transaction(const std::string &description, double amount);
    double getAmount() const;
    std::string getDescription() const;
    std::time_t getTimestamp() const;
};

#endif // TRANSACTION_H
