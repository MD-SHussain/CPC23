#include <bits/stdc++.h>
using namespace std;

// function to print zigzag order traversal
void zigzg(Tree* root)
{
if (root==NULL)
    return ans;

queue<Tree*> q;
q.push(root);
bool lefttoRight = true;
int l=-1;
while(!q.empty()) {
    int n=q.size();
    l++;
    vector<int> level(n);
    for (int i=0;i<n;i++) 
    {
    Tree* front=q.front();
    q.pop();
    level.push_back(front->data);
    if(front->left) q.push(front->left);
    if(front->right) q.push(front->right);
    }
    if(l%2==0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<level[i]<<" ";
        }
    }
    else
    {
        for(int i=n-1;i>=0;i--)
        {
            cout<<level[i]<<" ";
        }       
    }
    
}
}