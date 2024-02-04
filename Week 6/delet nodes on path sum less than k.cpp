int s=0;
#include <bits/stdc++.h>
using namespace std;

// function for deleteing nodes on path whose sum is<k
tree* deletenodes(tree* p, int k, int *s)
{
    if(p)
    {
    int l,r;
    l=*s+p->data;
    r=l;
    p->left=deletenodes(p->left,k,&l);
    p->right=deletenodes(p->right,k,&r);
    if(l>r) *s=l;
    else *s=r;
    if(*s<k)
    {
        delete p;
        p=NULL;
    }
    return p;
    }

    return NULL;
}