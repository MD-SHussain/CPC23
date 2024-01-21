#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

Node* reverse(Node* head) 
{ 
    if (!head) 
        return NULL; 
    Node* current = head; 
    Node* next = NULL; 
    Node* prev = NULL; 
    int count = 0; 
  
    while (current != NULL && count < 2) { 
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
        count++; 
    } 

    if (next != NULL) 
        head->next = reverse(next); 
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
    cout<<"Enter the no. of nodes : ";
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

	result=reverse(head);
	return 0;
}

 
