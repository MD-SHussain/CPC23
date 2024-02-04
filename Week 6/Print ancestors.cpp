#include <bits/stdc++.h>
using namespace std;

// function to print ancestors of a given node
int anc(tree* p,int k)
{
if(p)
{
    if(p->data==k) return 1;
    if(anc(p->left,k))
    {
        cout<<p->data<<" ";
        return 1;
    }
    else if(anc(p->right,k))
    {
        cout<<p->data<<" ";
        return 1;
    }
}
  return 0;
    
}