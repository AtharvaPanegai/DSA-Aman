// convert a binary tree into linkedlist in a preorder format
// reArrange new nodees

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

void flatten(TreeNode *root)
{
    TreeNode *prev;
    if (!root)
        return;

    flatten(root->right);
    flatten(root->left);

    root->right = prev;
    root->left = NULL;

    prev = root;
}

int main()
{

    return 0;
}