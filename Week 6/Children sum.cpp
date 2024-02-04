#include <bits/stdc++.h>
using namespace std;

// function for checking if a tree is a children s tree or not
bool child_s(tree* p)
{
    if(p)
    {
        if(p->left==NULL&&p->right==NULL)
        return true;
        int s=0;
        if (p->left) s+=p->left->data;
        if (p->right) s+=p->right->data;
        if(p->data==s)
        {
            if(child_s(p->left)&&child_s(p->right)) return true;
            else return false;
        }
        else return false;
    }
    return true;
}