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

TreeNode *searchInBST(TreeNode *root, int data)
{
    if (!root)
        return NULL;

    if (root->val == data)
    {
        return root;
    }
    else if (root->val < data)
    {
        return searchInBST(root->right, data);
    }
    else if (root->val > data)
    {
        return searchInBST(root->left, data);
    }
}

TreeNode *searchBST(TreeNode *root, int val)
{
    while (root && root->val != val)
    {
        root = (root->val > val) ? root->left : root->right;
    }
    return root;
}
int main()
{

    return 0;
}