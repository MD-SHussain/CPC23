#include <bits/stdc++.h>
using namespace std;

// function for checking if a binary tree is bst or not
bool check_bst(tree *p) {
    return bst(p,INT_MIN,INT_MAX);
}
bool bst(tree * p,int minv,int maxv) {
    if(p==NULL) return true;
    if(p->data>= maxv || p->data<=minv) return false;
    if(bst(p ->left,minv,p->data) && bst(p->right,p->data,maxv))
    return true;
    return false;
}
