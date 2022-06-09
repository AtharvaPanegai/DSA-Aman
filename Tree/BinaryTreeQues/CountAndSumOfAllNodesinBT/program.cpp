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

int NumberOfNodes(TreeNode *root)
{
    if (!root)
    {
        return 0;
    }

    return NumberOfNodes(root->left) + NumberOfNodes(root->right) + 1;
}

int sumOfAllNodes(TreeNode *root)
{
    if (!root)
        return 0;

    return sumOfAllNodes(root->left) + sumOfAllNodes(root->right) + root->val;
}

int main()
{

    return 0;
}