#include <bits/stdc++.h>
using namespace std;

// function to check whether bt is foldable on nott
bool fold(tree* r1,tree* r2)
{
    if(r1==NULL&& r2==NULL) return true;
    if(r1==NULL || r2==NULL) return false;
    if((r1->left==NULL && r1->right==NULL) && (r2->left==NULL && r2->right==NULL))    return true;
    if((r1->left && r2->right)||(r1->right && r2->left))  
    {
       if(fold(r1->left,r2->right) && fold(r1->right,r2->left)) return true;
    }
    else return false;
}


bool check_foldable(struct tree* p)
{
if(p)
return fold(p->left,p->right);
return true;
}