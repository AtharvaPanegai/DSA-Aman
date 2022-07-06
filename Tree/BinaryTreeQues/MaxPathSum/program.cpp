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
    int ans = INT_MIN;

    int find(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = max(0, find(root->left));
        int right = max(0, find(root->right));

        ans = max(ans, left + right + root->val);

        return max(left, right) + root->val;
    }

    int findMaxSum(TreeNode *root)
    {
        find(root);
        return ans;
    }
};

int main()
{

    return 0;
}