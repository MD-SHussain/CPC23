#include <bits/stdc++.h>
using namespace std;

// function to check whether any root to leaff path sum is equal to given number
bool sum(tree* p,int k)
{
    if(p)
    {
      if (p->left=NULL && p->right==NULL) 
    {
        if(p->data==k) return true;
        return false;
    }
    if(sum(p->left,k-p->data)) return true;
    if(sum(p->right,k-p->data)) return true;
    return false;
    }
}
