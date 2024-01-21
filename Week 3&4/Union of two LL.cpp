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

struct Node* sortedIntersect( struct Node* a,struct Node* b)
{
    struct Node* result = NULL;

    while (a != NULL && b != NULL) {
        if (a->data == b->data) {
            insert(&result, a->data);
            a = a->next;
            b = b->next;
        }
        else if (a->data < b->data)
        {
            insert(&result, a->data);
            a = a->next;
        }
        
        else
        {
            insert(&result, b->data);
            b = b->next;
        }
            
    }
    while(a)
    {
        insert(&result, a->data);
        a = a->next;
    }
    while(b)
    {
        insert(&result, b->data);
        b = b->next;
    }

    return (result);
}




int main()
{
	struct Node* head1=NULL;
    struct Node* head2=NULL;
    struct Node* result;
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

	result=sortedIntersect(head1,head2);
    while(result)
    {
        cout<<result->data<<" ";
        result=result->next;
    }
	return 0;
}
