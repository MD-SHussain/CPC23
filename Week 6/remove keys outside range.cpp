#include <bits/stdc++.h>
using namespace std;

// function for removing keys outside range
tree* fun(tree *p, int l, int r)
{
    if(p)
    {
    p->left=fun(p->left,l,r);
    p->right=fun(p->right,l,r);
   if(p->key<l)
   {
       tree* t=p->right;
       delete p;
       return t;
   }
   if(p->key>r)
   {
       tree* t=p->left;
       delete p;
       return t;
   }
   return p;
    }
    return NULL;
}