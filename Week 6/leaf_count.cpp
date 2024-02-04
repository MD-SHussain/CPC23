#include <bits/stdc++.h>
using namespace std;

// function for counting leaf nodess
int countpatte(struct Tree* root) 
{ 
    if(root)
    {
    if(root->left==NULL && root->right==NULL) 
        return 1;         
    else
    {
        int l=countpatte(root->left); 
        int r=countpatte(root->right); 
        return l+r;
    }
         
    }
    return 0;
}