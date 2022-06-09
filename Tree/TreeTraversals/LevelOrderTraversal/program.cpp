// #include "bits/stdc++.h"
// using namespace std;

// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;

//     // constructor
//     TreeNode(int data)
//     {
//         val = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// vector<vector<int>>  ret;

// void buildVector(TreeNode *root, int depth)
// {
//     if(!root){
//         return;
//     }
//     if(ret.size()==depth){
//         ret.push_back(vector<int>());
//     }

//     ret[depth].push_back(root->val);
//     buildVector(root->left,depth+1);
//     buildVector(root->right,depth+1);

// }

// vector<vector<int>> levelOrder(TreeNode *root)
// {
//     buildVector(root,0);
//     return ret;
// }

// int main()
// {

//     return 0;
// }

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

vector<vector<int>> ret;

// here depth means the index if the matrix
void buildVector(TreeNode *root, int depth)
{
    if (!root)
        return;
    if (ret.size() == depth)
    {
        ret.push_back(vector<int>());
    }

    // preorder way
    ret[depth].push_back(root->val);
    buildVector(root->left, depth + 1);
    buildVector(root->right, depth + 1);
}

vector<vector<int>> levelOrder(TreeNode *root)
{
    buildVector(root, 0);
    return ret;
}

int main()
{

    return 0;
}