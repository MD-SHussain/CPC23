#include <bits/stdc++.h>
using namespace std;

  struct Node {
      int data;
      Node *next;
      Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node *next) : data(x), next(next) {}
  };
 

Node* deleteDuplicates(Node* head)
{
        if(head==NULL)
        return head;
        Node *list,*curr;
        list=head;
        curr=list;
        head=head->next;
        while(head)
        {
         if(curr->data==head->data)
         {
         head=head->next;
         curr->next=NULL;
         continue;
         }
         else
         {
             curr->next=head;
             curr=curr->next;
             head=head->next;
         }
        }

        return list;
        
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

    cout<<"Enter the dataue of nodes"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the dataue: ";
        cin>>data;
        insert(&head,data);
        cout<<endl;

    }

	deleteDuplicates(head);
	return 0;
}