#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

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

void mergeLL(Node *p, Node **q)  
{  
    Node *p_curr = p, *q_curr = *q;  
    Node *p_next, *q_next;  
  
    while (p_curr != NULL && q_curr != NULL)  
    {  
        p_next = p_curr->next;  
        q_next = q_curr->next;  
  
        q_curr->next = p_next;
        p_curr->next = q_curr; 

        p_curr = p_next;  
        q_curr = q_next;  
    }   
    *q = q_curr;  
}




int main()
{
	struct Node* head1=NULL;
    struct Node* head2=NULL;
    cout<<"Enter the no. of nodes of 2 LLs ";
    int n1,n2,data;
    cin>>n1>>n2;

    cout<<"Enter the value of nodes of 1st Linked list"<<endl;

    for(int i=0;i<n1;i++)
    {
        cout<<"Enter the value: ";
        cin>>data;
        insert(&head1,data);
        cout<<endl;

    }

    cout<<"Enter the value of nodes of 2nd Linked list"<<endl;

    for(int i=0;i<n2;i++)
    {
        cout<<"Enter the value: ";
        cin>>data;
        insert(&head2,data);
        cout<<endl;

    }
   mergeLL(head1,&head2);

	return 0;
}
