#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};



int detectLoop(Node* head)
{
    Node *slow=head, *fast=head;
 
    while (slow && fast && fast->next) {
        slow=slow->next;
        fast=fast->next->next;
        if (slow==fast) {
            return 1;
        }
    }
    return 0;
} 

void insert(Node** root, int item) 
{ 
    Node* temp = new Node; 
    Node* ptr; 
    temp->data = item; 
    temp->next = NULL; 
  
    if (*root == NULL) 
        *root = temp; 
    else { 
        ptr = *root; 
        while (ptr->next != NULL) 
            ptr = ptr->next; 
        ptr->next = temp; 
    } 
}


int main()
{
	struct Node* head=NULL;
    cout<<"Enter the no. of nodes: ";
    int n,data;
    cin>>n;

    cout<<"Enter the value of nodes"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value: ";
        cin>>data;
        insert(&head,data);
        cout<<endl;

    }

	detectLoop(head)? cout<<"Loop exist" : cout<<"No loop";
	return 0;
}
