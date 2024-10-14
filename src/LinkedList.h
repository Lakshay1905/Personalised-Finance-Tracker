#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Transaction.h"

class ListNode
{
public:
    Transaction transaction;
    ListNode *next;

    ListNode(const Transaction &tx) : transaction(tx), next(nullptr) {}
};

class LinkedList
{
private:
    ListNode *head;

public:
    LinkedList();
    void addTransaction(const Transaction &transaction);
    void printTransactions() const;
};

#endif // LINKEDLIST_H
