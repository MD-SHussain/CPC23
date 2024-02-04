#include <bits/stdc++.h>
using namespace std;

// function for populating inorder successor

void populate(Tree* root,Tree* &pointer){
    if(root==NULL)
     return;
    populate(root->left,pointer);
    if(pointer)  pointer->next = root;
    pointer=root;
    populate(root->right,pointer); 
    }
    
void populate_next(Tree *root)
{
    Tree* pointer=NULL;
    populate(root,pointer);
        
}