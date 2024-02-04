#include <bits/stdc++.h>
using namespace std;

// function for spiral level order traversal

void spiral_level_order(Tree *node)
{
    if(node==NULL) 
    return;
    if (node->left==NULL && node->right==NULL) 
    {
        cout<<node->data<<" ";
        return ;
    }

    stack<Tree*> s1;
    stack<Tree*> s2;

    s1.push(node);
    while (!s1.empty()||!s2.empty()) {
        while (!s1.empty()) {
            Tree* t = s1.top();
            s1.pop();
            cout<<t->data<<" ";
            if (t->right) s2.push(t->right);
            if (t->left) s2.push(t->left);
        }
        while (!s2.empty()) {
            Tree* t = s2.top();
            s2.pop();
            cout<<t->data<<" ";

            if (t->left) s1.push(t->left);
            if (t->right) s1.push(t->right);
        }
    }
}