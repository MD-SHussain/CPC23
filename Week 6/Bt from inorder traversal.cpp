#include <bits/stdc++.h>
using namespace std;

// function for forming bt from inorder traversal 
tree* bt(vector<int> v,int l,int r) 
{
    if(l<=r)
    {
    int ind=max_element(v,l,r); 
    tree* p=new tree();
    p->data=v[ind]; 
    if(l==r) return root; 
    p->left=bt(v,l,i-1); 
    p->right=bt (v,i+1,r); 
    return p;
    }
    return NULL; 
} 