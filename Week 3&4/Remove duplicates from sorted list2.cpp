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
       Node *dummy=new Node(0,head);
       Node *prev=dummy;
        
        while(head!=NULL){
       
        if(head->next!=NULL && head->data==head->next->data){
                
while(head->next!=NULL && head->data==head->next->data)head=head->next;
                     
                   
                        prev->next=head->next;
                }
                
                else prev=prev->next;
                       
               
                head=head->next;
        }
        
        return dummy->next;
        
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