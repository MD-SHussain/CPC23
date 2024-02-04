#include <bits/stdc++.h>
using namespace std;

// function for checking if a tree is a sum tree or not
int sum(tree* p)
{
    if(p)
    return +p->data+sum(p->left)+sum(p->right);
    return 0;
}
bool check(tree* N)
{
    if(N==NULL || (N->left==NULL && N->right==NULL))
        return true;
    if ((N->data==sum(N->left)+sum(N->right)) && check(N->left) && check(N->right))
        return true;
    return false;
}