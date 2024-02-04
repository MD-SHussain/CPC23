#include <bits/stdc++.h>
using namespace std;

// function for returning all root to leaf paths 
vector<vector<int>> ans;
void path(tree* p,vector<int> v)
{
    if(p)
    {
    v.push_back(p->data);
    if(p->left==NULL && p->right==NULL) ans.push_back(v);
    path(p->left,v);
    path(p->right,v);
    }
}

vector<vector<int>> btpaths(tree* root)
{
    vector<int> v;
    path(root,v);
    return ans;
}
