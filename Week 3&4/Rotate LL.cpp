#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

Node* rotate(Node* head, int k) 
{ 

    Node* last=head; 
    Node* temp=head; 
  
    if (head==NULL||k==0) 
        return head;  
  
    while (last->next)
        last=last->next; 
     
  
    while (k) { 
        head = head->next; 
        temp->next = NULL; 
        last->next = temp; 
        last = temp; 
        temp = head; 
        k--; 
    } 
  
    return head; 
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
	struct Node* head=NULL, *result=NULL;
    cout<<"Enter the no. of nodes and no. of rotation: ";
    int n,k,data;
    cin>>n>>k;

    cout<<"Enter the value of nodes"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value: ";
        cin>>data;
        insert(&head,data);
        cout<<endl;

    }

	result=rotate(head,k);
	return 0;
}

 