#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};



void middleElement(struct Node *head) 
{ 
    struct Node *slow=head; 
    struct Node *fast=head; 
 
    if (head) 
    { 
        while (fast&&fast->next) 
        { 
            fast=fast->next->next; 
            slow=slow->next; 
        } 
        cout<<"The middle element is: "<<slow->data<<endl; 
    } 
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

	middleElement(head);
	return 0;
}

