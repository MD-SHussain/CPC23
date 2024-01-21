#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void segregateEvenOdd(Node **head)  
{  
    Node *end = *head;  
    Node *prev = NULL;  
    Node *curr = *head;  
  
    while (end->next != NULL)  
        end = end->next;  
  
    Node *new_end = end;  

    while (curr->data % 2 != 0 && curr != end)  
    {  
        new_end->next = curr;  
        curr = curr->next;  
        new_end->next->next = NULL;  
        new_end = new_end->next;  
    }  

    if (curr->data%2 == 0)  
    {  

        *head = curr;  
  

        while (curr != end)  
        {  
            if ( (curr->data) % 2 == 0 )  
            {  
                prev = curr;  
                curr = curr->next;  
            }  
            else
            {  
                prev->next = curr->next;  
                curr->next = NULL;  
                new_end->next = curr;  
                new_end = curr;  
                curr = prev->next;  
            }  
        }  
    }  

    else prev = curr;  
    if (new_end != end && (end->data) % 2 != 0)  
    {  
        prev->next = end->next;  
        end->next = NULL;  
        new_end->next = end;  
    }  
    return;  
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

	segregateEvenOdd(&head);
	return 0;
}

