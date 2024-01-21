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

int multiplyLL(Node* first, Node* second) 
{  
    int num1=0, num2=0; 
    while (first||second){ 
          
        if(first){ 
            num1 = ((num1)*10) + first->data; 
            first = first->next; 
        } 
          
        if(second) 
        { 
            num2 = ((num2)*10) + second->data; 
            second = second->next; 
        } 
          
    } 
    return ((num1)*(num2)); 
}




int main()
{
	struct Node* head1=NULL;
    struct Node* head2=NULL;
    int result;
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

	result=multiplyLL(head1,head2);
    
        cout<<result<<" "<<endl;
	return 0;
}
