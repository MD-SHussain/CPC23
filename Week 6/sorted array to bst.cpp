#include <bits/stdc++.h>
using namespace std;

// function to form bst from sorted array
tree* bst(vector<int> v,int l,int r)
{
    if(l<=r)
    {
    int mid= l+(r-l)/2;
    tree* node=new tree();
    node->data=v[mid];
    node->left=bst(v,l,mid-1);
    node->right=bst(v,mid+1,r);
    return node;
    }
    return NULL;
}