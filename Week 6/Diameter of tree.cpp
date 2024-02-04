#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxpath=INT_MIN;
   int path(TreeNode* root)
    {
        if(root)
        { 
            int leftpath=path(root->left);
            int rightpath=path(root->right);
            maxpath=max(maxpath,leftpath+rightpath);
            return 1+max(leftpath,rightpath);
        }
        return 0;


    }
    int diameterOfBinaryTree(TreeNode* root) {
        int k=path(root);
        return maxpath;
        
    }
};