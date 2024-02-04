#include <bits/stdc++.h>
using namespace std;

// function to find width of a tree: bfs
int tree_width(struct tree* root)
{
    if(root)
    {
    queue<tree*> que;
    int ans=0;
    que.push(root);
    while (!que.empty()) 
    {
        int size=q.size();
        ans=max(size,ans);
        while (size>0) {
        tree* node=q.front();
            q.pop();
            size--;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
    return ans; 
    }

    return 0;
}