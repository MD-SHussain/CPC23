#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

Node *alternatereverse(Node *head, int k) 
{ 
    Node* current = head; 
    Node* next; 
    Node* prev = NULL; 
    int count = 0; 
 
    while (current != NULL && count < k) 
    { 
    next = current->next; 
    current->next = prev; 
    prev = current; 
    current = next; 
    count++; 
    } 

    if(head != NULL) 
    head->next = current; 

    count = 0; 
    while(count < k-1 && current != NULL ) 
    { 
    current = current->next; 
    count++; 
    } 

    if(current != NULL) 
    current->next = alternatereverse(current->next, k); 

    return prev; 
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
    cout<<"Enter the no. of nodes and no. nodes in group: ";
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

	result=alternatereverse(head,k);
	return 0;
}

 
