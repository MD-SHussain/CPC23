#include <bits/stdc++.h>
using namespace std;

// function for finding maximum root to leaf path sum
vector<int> ans;
void path(tree* p,int sum)
{
    if(p)
    {
    sum+=p->data;
    if(p->left==NULL && p->right==NULL) ans.push_back(sum);
    path(p->left,v);
    path(p->right,v);
    }
}

int btpaths(tree* root)
{
    int sum=0;
    path(root,sum);
    sort(ans.begin(),ans.end());
    return ans[ans.size()-1];
}
