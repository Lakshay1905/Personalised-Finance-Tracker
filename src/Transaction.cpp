#include "Transaction.h"

Transaction::Transaction(const std::string &description, double amount)
    : description(description), amount(amount), timestamp(std::time(nullptr)) {}

double Transaction::getAmount() const
{
    return amount;
}

std::string Transaction::getDescription() const
{
    return description;
}

std::time_t Transaction::getTimestamp() const
{
    return timestamp;
}
