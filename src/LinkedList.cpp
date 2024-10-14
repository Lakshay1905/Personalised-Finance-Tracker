#include "LinkedList.h"
#include <iostream>
#include <ctime> // Include ctime for std::ctime

LinkedList::LinkedList() : head(nullptr) {}

void LinkedList::addTransaction(const Transaction &transaction)
{
    ListNode *newNode = new ListNode(transaction);
    newNode->next = head;
    head = newNode;
}

void LinkedList::printTransactions() const
{
    ListNode *current = head;
    while (current)
    {
        // Store the timestamp in a time_t variable
        std::time_t timestamp = current->transaction.getTimestamp();

        // Output transaction details
        std::cout << "Transaction: " << current->transaction.getDescription()
                  << ", Amount: " << current->transaction.getAmount()
                  << ", Timestamp: " << std::ctime(&timestamp); // Use the variable

        current = current->next;
    }
}
