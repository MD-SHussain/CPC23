#include <bits/stdc++.h>
using namespace std;

// function to convert bt to sum tree
int sumtree(tree *p) 
{  
    if(p)
    {
    int k=p->data; 
    p->data=sumtree(p->left)+sumtree(p->right); 
    return p->data+k; 
    }
    return 0;
} 