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
class Solution
{
    TreeNode *prev;
    void flatten(TreeNode *root)
    {
        if (!root)
            return;

        flatten(root->right);
        flatten(root->left);

        root->left = NULL;
        root->right = prev;

        prev = root;
    }
};
int main()
{

    return 0;
}