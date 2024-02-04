#include <bits/stdc++.h>
using namespace std;

// functions to fix swapped nodes of bst
tree* i, *j, *k;
void inorder(tree* p) 
{
    if(p)
    {
    inorder(p->left);
    if(i==NULL && p->val<k->val) i=k;
    if(i!=NULL && p->val<k->val) j=p;
    k=p;
    inorder(p->right);
    }
}
void recoverTree(tree* p) {
    k=new tree(INT_MIN);
    inorder(p);
    swap(i->val,j->val);
}


