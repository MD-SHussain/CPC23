#include <bits/stdc++.h>
using namespace std;

// function to find kth smalles in bst
int kth_element(tree* p,int k) {
    int i=0;
    stack<tree*> s;
    while(!s.empty()||p){
        while(p){
            s.push(p);
            p=p->left;
        }
        i++;
        p=s.top();
        if(i==k) return p->val;
        s.pop();
        p=p->right;
    }
    return -1;
}