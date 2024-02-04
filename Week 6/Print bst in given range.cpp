#include <bits/stdc++.h>
using namespace std;

// function for printing bst nodes in given range
void inorder(tree* p,int l,int r) 
{ 
    if(p)
    {
    inorder(p->left,l,r); 
    if (l<=p->data && r>=p->data) cout<<p->data<<" "; 
    inorder(p->right,l,r); 
    }
}