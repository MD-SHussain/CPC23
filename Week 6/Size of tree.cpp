#include <bits/stdc++.h>
using namespace std;
// function for returning size of a tree
int Trees_ize(struct node* tree) 
{ 
    if(node!=NULL)
    {
        int size=tree->left+tree->right+1;
        return size;
    }
    return 0;
}