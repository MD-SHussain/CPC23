#include <bits/stdc++.h>
using namespace std;

// function to find minimum element in bst
void fun(tree* root) 
{ 
    tree* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    cout<<temp->data<<endl;
} 