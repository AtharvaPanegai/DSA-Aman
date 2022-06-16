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

TreeNode *constructBST(vector<int> &preOrder)
{
    int i = 0;
    return buildTree(preOrder, 0, INT_MAX);
}

TreeNode *buildTree(vector<int> &A, int i, int bound)
{
    if (i == A.size() || A[i] > bound)
        return NULL;
    TreeNode *root = new TreeNode(A[i++]);
    root->left = buildTree(A, i, root->val);
    root->right = buildTree(A, i, bound);

    return root;
}

int main()
{

    return 0;
}