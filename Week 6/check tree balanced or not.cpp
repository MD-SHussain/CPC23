#include <bits/stdc++.h>
using namespace std;

// function to check whether tree is balance or nott
int height(tree* p)
{
    if(p)
    {
        return 1+max(height(tree->left),height(tree->right));
    }
    return 0;
}
bool fun(tree* q)
{
    if(q)
    {
    if (abs(height(q->left)-height(q->right))<=1)
    {
        if(fun(q->left) && fun(q->right))
        return 1;
        return 0;
    }
    return 0;
    }
    return 1;
}