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

TreeNode *insertBST(int data, TreeNode *root)
{
    if (!root)
        return new TreeNode(data);
    if (data < root->val)
    {
        root->left = insertBST(data, root->left);
    }
    else
    {
        root->right = insertBST(data, root->right);
    }
    return root;
}

void inOrder(TreeNode *root)
{
    if (!root)
        return;
    inOrder(root->left);
    cout << root->val;
    inOrder(root->right);
}

int main()
{
    TreeNode *root = NULL;
    root = insertBST(5, root);
    root = insertBST(1, root);
    root = insertBST(3, root);
    root = insertBST(4, root);
    root = insertBST(2, root);
    root = insertBST(7, root);

    inOrder(root);

    return 0;
}