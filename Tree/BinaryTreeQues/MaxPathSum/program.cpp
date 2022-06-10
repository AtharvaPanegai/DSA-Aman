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

int maxPathSum(TreeNode *root)
{
    if (!root)
        return 0;

    int sumOfNodes = 0;
    sumOfNodes += root->val;
    sumOfNodes += max(maxPathSum(root->left), maxPathSum(root->right));

    return sumOfNodes;
}

int main()
{

    return 0;
}