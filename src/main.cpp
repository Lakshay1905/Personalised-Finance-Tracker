#include "FinanceTracker.h"
#include <iostream>

void displayMenu()
{
    std::cout << "1. Add Account" << std::endl;
    std::cout << "2. Add Transaction" << std::endl;
    std::cout << "3. Print Accounts" << std::endl;
    std::cout << "4. Print Transactions" << std::endl;
    std::cout << "5. Find Account" << std::endl;
    std::cout << "6. Load from File" << std::endl;
    std::cout << "7. Save to File" << std::endl;
    std::cout << "8. Display Statistics" << std::endl;
    std::cout << "0. Exit" << std::endl;
}

int main()
{
    FinanceTracker tracker;
    int choice;
    do
    {
        displayMenu();
        std::cin >> choice;
        switch (choice)
        {
        case 1:
        {
            std::string name;
            double balance;
            std::cout << "Enter account name and balance: ";
            std::cin >> name >> balance;
            tracker.addAccount(name, balance);
            break;
        }
        case 2:
        {
            std::string description;
            double amount;
            std::cout << "Enter transaction description and amount: ";
            std::cin >> description >> amount;
            tracker.addTransaction(description, amount);
            break;
        }
        case 3:
            tracker.printAccountDetails();
            break;
        case 4:
            tracker.printTransactions();
            break;
        case 5:
        {
            std::string name;
            std::cout << "Enter account name to find: ";
            std::cin >> name;
            if (tracker.findAccount(name))
            {
                std::cout << "Account found!" << std::endl;
            }
            else
            {
                std::cout << "Account not found." << std::endl;
            }
            break;
        }
        case 6:
        {
            std::string filename;
            std::cout << "Enter filename to load: ";
            std::cin >> filename;
            tracker.loadFromFile(filename);
            break;
        }
        case 7:
        {
            std::string filename;
            std::cout << "Enter filename to save: ";
            std::cin >> filename;
            tracker.saveToFile(filename);
            break;
        }
        case 8:
            tracker.displayStatistics();
            break;
        case 0:
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Try again." << std::endl;
            break;
        }
    } while (choice != 0);
    return 0;
}
