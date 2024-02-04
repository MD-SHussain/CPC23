#include <bits/stdc++.h>
using namespace std;

// function to convert bst into greater sum tree
int sum=0;
void greatertree(tree* &root, int &sum)
{
    if(root)
    {
    greatertree(root->right,sum);
    int data=root->val;
    root->val+=sum;
    sum+=data;
    greatertree(root->left,sum);
    }
}

