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

void sumReplacement(TreeNode *root)
{
    if (!root)
        return;

    sumReplacement(root->left);
    sumReplacement(root->right);

    if (root->left)
    {
        root->val += root->left->val;
    }
    if (root->right)
    {
        root->val += root->right->val;
    }
}

int main()
{

    return 0;
}