#include <bits/stdc++.h>
using namespace std;

// function to check if a btis complete or not
int isCompleteBT(tree* p)
{
    queue<tree*> q;
    q.push(p);
    int f=1;
   while(!q.empty()) 
    {
        tree* front=q.front();
        q.pop();
 
        if(front->left){
          if(f==0) return 0;
          q.push(front->left);
        }
        else f=0;

        if(front->rigth){
          if(f==0) return 0;
          q.push(front->right);
        }
        else f=0;

    }

    return 1;
}