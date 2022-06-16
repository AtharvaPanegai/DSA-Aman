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

// Delete in BST
TreeNode *deleteInBST(TreeNode *root, int key)
{
    if (root)
    {
        if (root->val < key)
            root->right = deleteInBST(root->right, key);
        else if (root->val > key)
            root->left = deleteInBST(root->right, key);
        else
        {
            if (!root->left && !root->right)
                return NULL;
            else if (!root->left || !root->right)
                return root->left ? root->left : root->right;

            TreeNode *temp = root->left;
            while (temp->right != NULL)
                temp = temp->right;
            root->val = temp->val;
            root->left = deleteInBST(root->left, temp->val);
        }
    }
    return root;
}

int main()
{

    return 0;
}