//Attempted at leetcode
class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
        return NULL;
        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node* node=q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

                if(i==n-1)
                node->next=NULL;
                else
                node->next=q.front();
            }
        }
         return root;
        
    }
};