#include <bits/stdc++.h>
using namespace std;

// function for checking if a bt has a pair for given sum
void inorder(tree* p,vector<int>& v) 
{
    if(p)
    {
    inorder(p->left,v);
    v.push_back(p->val);
    inorder(p->right,v);
    }
}
bool pairsum(tree* p,int k) {
    vector<int> v;
    inorder(p,v);
    int i=0,j=v.size()-1;
    while(i<j) 
    {
        int s=v[i]+v[j];
        if (s==k) return true;
        else if(s<k) i++;
        else j--; 
    }

    return false;
}