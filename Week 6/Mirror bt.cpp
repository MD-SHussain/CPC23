#include <bits/stdc++.h>
using namespace std;

// function to return mirror bt
tree* mirror(tree* p) {
    if(p)
    {
        tree* temp=p->left;
        p->left=p->right;
        p->right=temp;
        mirror(p->left);
        mirror(p->right);
    }
    
    return p;
}
