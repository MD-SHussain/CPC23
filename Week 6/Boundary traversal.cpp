#include <iostream>
using namespace std;

//functions for boundary traversal
//left,leafs,right

vector<int> ans;
void leaf(Tree* node)
{
    if(node)
    {
	leaf(node->left);
	if (node->left==NULL && node->right==NULL)
		ans.push_back(node->data);
    leaf(node->right);
    }
}

void l(Tree* node)
{
    if(node)
    {
	if(node->left){
		ans.push_back(node->data);
		l(node->left);
	}
	else if(node->right) {
		ans.push_back(node->data);
		l(node->right);
	}
    }
}

void r(Tree* node)
{
    if(node)
    {
        if(node->right){
            r(node->right);
            ans.push_back(node->data);
        }
        else if(node->left) {
            r(node->left);
            
        }
    }
}

void boundaryTraversal(Tree* node)
{
    if(node)
    {
    ans.push_back(node->data);
	l(node->left);
	leaf(node->left);
	leaf(node->right);
	r(node->right);
    }
}

