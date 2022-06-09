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

int rec(TreeNode *root, int &d)
{
    if (!root)
        return 0;

    int ld = rec(root->left, d);
    int rd = rec(root->right, d);

    d = max(d, ld + rd);
    return max(ld, rd) + 1;
}

int diameterTree(TreeNode *root)
{
    if (!root)
        return 0;
    int d = 0;
    rec(root, d);
    return d;
}

int main()
{

    return 0;
}