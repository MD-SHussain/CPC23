#include <bits/stdc++.h>
using namespace std;

// function for printing left view of a bt
int maxl=-1;
int l=0;

void leftview(tree *root,int l)
{
    if(root)
    {
       if(l>maxl)
        {
        cout<<root->data<<" ";
        maxl=l;
        }

    leftview(root->left,l+1);
    leftview(root->right,l+1);        
    }
}