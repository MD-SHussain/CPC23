#include <bits/stdc++.h>
using namespace std;

// function to convert a tree into its double tree
void f(tree* root) 
{ 
    if(root)
    {
    tree* temp;  
    f(root->left); 
    f(root->right); 
    temp = root->left;
    tree* newnode = new tree();
    newnode->data=root->data; 
    newnode->left=NULL; 
    newnode->right=NULL
    root->left=newnode;
    root->left->left=temp; 
    }
} 