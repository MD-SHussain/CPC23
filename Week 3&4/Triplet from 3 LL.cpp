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

void isSumSorted(Node *headA, Node *headB, 
                Node *headC, int givenNumber) 
{ 
    Node *a = headA; 
 
    while (a) 
    { 
        Node *b = headB; 
        Node *c = headC; 
        while (b&&c) 
        { 
            int sum = a->data + b->data + c->data; 
            if (sum == givenNumber) 
            { 
            cout <<"Triplet Found: " << a->data << " " << 
                                b->data << " " << c->data;  
            } 
            else if (sum < givenNumber) 
                b = b->next; 
            else
                c = c->next; 
        } 
        a = a->next;
    } 
 
    cout << "No such triplet"; 
}




int main()
{
	struct Node* head1=NULL;
    struct Node* head2=NULL;
    struct Node* head3=NULL;
    struct Node* result;
    cout<<"Enter the no. of nodes of  LLs and target sum: ";
    int n,data,k;
    cin>>n,k;

    cout<<"Enter the value of nodes of 1st Linked list"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value: ";
        cin>>data;
        insert(&head1,data);
        cout<<endl;

    }

    cout<<"Enter the value of nodes of 2nd Linked list"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value: ";
        cin>>data;
        insert(&head2,data);
        cout<<endl;

    }

    cout<<"Enter the value of nodes of 3rd Linked list"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value: ";
        cin>>data;
        insert(&head3,data);
        cout<<endl;

    }

	isSumSorted(head1,head2,head3,k);
	return 0;
}

