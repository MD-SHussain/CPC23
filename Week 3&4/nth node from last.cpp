#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void nthNode(struct Node* head,int k, int n)
{
	struct Node* temp = head;
	temp=head;
	for (int i=1;i<k-n+1;i++)
		temp=temp->next;

	cout<<"The value of nth node from last is: "<<temp->data;

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
	struct Node* head = NULL;
    cout<<"Enter the no. of nodes and the value of n: ";
    int k,n,data;
    cin>>k>>n;

    if(k<n)
    {
    cout<<"Invalid request"<<endl;
    return 0;
    }

    cout<<"Enter the value of nodes"<<endl;

    for(int i=0;i<k;i++)
    {
        cout<<"Enter the value: ";
        cin>>data;
        insert(&head,data);
        cout<<endl;

    }

	nthNode(head,k,n);
	return 0;
}

