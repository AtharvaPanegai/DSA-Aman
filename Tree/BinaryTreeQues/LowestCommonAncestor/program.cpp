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

TreeNode *LowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (!root || root == p || root == q)
        return root;

    TreeNode *left = LowestCommonAncestor(root->left, p, q);
    TreeNode *right = LowestCommonAncestor(root->right, p, q);

    return !left ? right : !right ? left
                                  : root;

    // if (!left)
    // {
    //     return right;
    // }
    // else if (!right)
    // {
    //     return left;
    // }
    // else if (left)
    // {
    //     if (right)
    //     {
    //         return root;
    //     }
    // }
}

int main()
{

    return 0;
}