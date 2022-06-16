#include "bits/stdc++.h"
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    // constructor
    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

TreeNode *inOrderSucc(TreeNode *root)
{
    TreeNode *curr = root;
    while (curr && curr->left)
    {
        curr = curr->left;
    }
    return curr;
}

// Delete in BST
TreeNode *deleteInBST(TreeNode *root, int key)
{
    if (key < root->val)
    {
        root->left = deleteInBST(root->left, key);
    }
    else if (key > root->val)
    {
        root->right = deleteInBST(root->right, key);
    }
    else if (root->val == key)
    {
        if (!root->left)
        {
            TreeNode *temp = root->right;
            free(root);
            return temp;
        }
        else if (!root->right)
        {
            TreeNode *temp = root->left;
            free(root);
            return temp;
        }
        // case 3
        TreeNode *temp = inOrderSucc(root->right);
        root->val = temp->val;
        root->right = deleteInBST(root->right, temp->val);
    }
    return root;
}

int main()
{

    return 0;
}