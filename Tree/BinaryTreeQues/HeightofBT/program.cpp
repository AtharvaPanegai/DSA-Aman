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

int height(TreeNode *root)
{
    if (!root)
        return 0;

    return max(height(root->left), height(root->right)) + 1;
}

int main()
{
    return 0;
}