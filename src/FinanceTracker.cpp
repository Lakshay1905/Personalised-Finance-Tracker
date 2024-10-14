#include "FinanceTracker.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

void FinanceTracker::addAccount(const std::string &name, double balance)
{
    accounts.insert(Account(name, balance));
}

void FinanceTracker::addTransaction(const std::string &description, double amount)
{
    transactions.addTransaction(Transaction(description, amount));
}

void FinanceTracker::printAccountDetails() const
{
    // Placeholder for account printing (no account details available in this example)
    std::cout << "Accounts are stored in a BST, but details are not printed directly." << std::endl;
}

void FinanceTracker::printTransactions() const
{
    transactions.printTransactions();
}

bool FinanceTracker::findAccount(const std::string &name) const
{
    return accounts.search(name);
}

void FinanceTracker::loadFromFile(const std::string &filename)
{
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream ss(line);
        std::string name;
        double balance;
        ss >> name >> balance;
        addAccount(name, balance);
    }
}

void FinanceTracker::saveToFile(const std::string &filename) const
{
    std::ofstream file(filename);
    // Placeholder for account saving logic (not implemented in this example)
    // You would need to implement saving accounts to the file.
}

void FinanceTracker::displayStatistics() const
{
    // Placeholder for statistics logic (not implemented in this example)
    std::cout << "Statistics are currently not available." << std::endl;
}
