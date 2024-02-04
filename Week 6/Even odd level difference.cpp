#include <bits/stdc++.h>
using namespace std;

// function to find differnce in sums of even and odd levels
int difference(struct tree* root)
{
    if(root)
    {
    queue<tree*> que;
    que.push(root);
    int l=-1,esum=0,osum=0;
    while (!que.empty()) 
    {
        int size=q.size();
        l++;
        while (size>0) {
        tree* node=q.front();
            q.pop();
            size--;
            if(l%2!=0) esum+=node->data;
            if(l%2==0) osum+=node->data;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    } 

    return abs(esum-osum);
    }
}