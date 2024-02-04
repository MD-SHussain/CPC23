#include <bits/stdc++.h>
using namespace std;

// function for returning height of a tree

int height(struct node* tree)
{
    if(tree!=NULL)
        return 1+max(height(tree->left),height(tree->right));
    return 0;
    
}