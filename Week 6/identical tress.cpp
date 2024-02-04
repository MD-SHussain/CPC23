#include <bits/stdc++.h>
using namespace std;

// function for finding if trees are identical or note
bool checkIdentical(struct tree* root1,struct tree* root2)
{
    if (root1==NULL && root2==NULL)
        return true;
 
    if (root1!=NULL && root2!=NULL) 
    {
        if(root1->data==root2->data && checkIdentical(root1->left,root2->left) && checkIdentical(root1->right,root2->right))
        return 1;
        else
        return 0;
    }
    return 0;
}