#include <bits/stdc++.h>
using namespace std;

// function to find inorder succsessor of a given node 
tree* sessor(tree* root, tree* node) {
   if (node==NULL)return NULL;
   if (node->right)
   {
       node=node->right;
       while(node->left)
           node=node->left;
       return node;
   }
   tree* s=NULL;
   while(root)
   {
       if(node->data<root->data)
       {
           s=root;
           root=root->left;
       }
       else if(node->data>root->data)
           root=root->right;
       else
           break;
   }
   return s;
}