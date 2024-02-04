#include <bits/stdc++.h>
using namespace std;

// function for inorder traversal of tree
void inorder(struct tree* root)
{
    if(root)
    {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    }
}

// function for preorder traversal of tree
void preorder(struct tree* root)
{
    if(root)
    {
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    }
}

// function for postorder traversal of tree
void postorder(struct tree* root)
{
    if(root)
    {
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    }
}