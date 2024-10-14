#ifndef BST_H
#define BST_H

#include "Account.h"

class BSTNode
{
public:
    Account account;
    BSTNode *left;
    BSTNode *right;

    BSTNode(const Account &acc) : account(acc), left(nullptr), right(nullptr) {}
};

class BST
{
private:
    BSTNode *root;

    void insert(BSTNode *&node, const Account &account);
    bool search(BSTNode *node, const std::string &name) const;

public:
    BST();
    void insert(const Account &account);
    bool search(const std::string &name) const;
};

#endif // BST_H
