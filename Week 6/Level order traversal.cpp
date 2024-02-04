#include <bits/stdc++.h>
using namespace std;

// function to print level order traversal
void levelOrder(struct tree* root)
{
    if(root)
    {
    queue<tree*> que;
    que.push(root);
    while (!que.empty()) 
    {
        int size=q.size();
        while (size>0) {
        tree* node=q.front();
            q.pop();
            size--;
            cout<<node->data<<" ";
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    } 
    }
}