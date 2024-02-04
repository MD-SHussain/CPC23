#include <bits/stdc++.h>
using namespace std;

// function for deleting tree uding postorder traversal
void postorderdeletion(node* node) 
{  
    if(root)
    {
    postorderdeletion(node->left); 
    postorderdeletion(node->right); 
    cout<<node->data<<" "; 
    delete node;
    }
}