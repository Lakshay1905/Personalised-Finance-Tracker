#include "BST.h"

BST::BST() : root(nullptr) {}

void BST::insert(BSTNode *&node, const Account &account)
{
    if (!node)
    {
        node = new BSTNode(account);
    }
    else if (account.getName() < node->account.getName())
    {
        insert(node->left, account);
    }
    else
    {
        insert(node->right, account);
    }
}

void BST::insert(const Account &account)
{
    insert(root, account);
}

bool BST::search(BSTNode *node, const std::string &name) const
{
    if (!node)
        return false;
    if (node->account.getName() == name)
        return true;
    return name < node->account.getName() ? search(node->left, name) : search(node->right, name);
}

bool BST::search(const std::string &name) const
{
    return search(root, name);
}
