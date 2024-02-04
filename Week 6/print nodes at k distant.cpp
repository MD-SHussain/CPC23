#include <bits/stdc++.h>
using namespace std;

// function to print nodes at k distant from root
void fun(Treenode *node,int k) 
{ 
    if(node)
    {
      if(k<0) return; 
    if(k==0) 
    { 
        cout<<node->data<<" "; 
        return;
    } 
     
        fun(node->left,k-1); 
        fun(node->right,k-1);         
    }
     
}