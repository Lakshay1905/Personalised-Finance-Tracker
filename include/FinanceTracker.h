#ifndef FINANCETRACKER_H
#define FINANCETRACKER_H

#include "Account.h"
#include "Transaction.h"
#include "BST.h"
#include "LinkedList.h"
#include <vector>
#include <string>

class FinanceTracker
{
private:
    BST accounts;
    LinkedList transactions;

public:
    void addAccount(const std::string &name, double balance);
    void addTransaction(const std::string &description, double amount);
    void printAccountDetails() const;
    void printTransactions() const;
    bool findAccount(const std::string &name) const;
    void loadFromFile(const std::string &filename);
    void saveToFile(const std::string &filename) const;
    void displayStatistics() const;
};

#endif // FINANCETRACKER_H
