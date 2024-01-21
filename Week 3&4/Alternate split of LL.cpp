#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void split(Node* N1, Node* N2){
   Node *tmp;
   if (N1 == NULL || N2 == NULL){
      return;
   }
   if (N1->next != NULL){
      tmp=N1->next->next;
      N1->next = tmp;
   }
   if (N2->next != NULL){
      tmp=N2->next->next;
      N2->next = tmp;
   }
   split(N1->next, N2->next);
}
void splitList(Node* head, Node** n1, Node** n2){
   *n1 = head;
   *n2 = head->next;
   split(*n1, *n2);
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
	struct Node* head=NULL,*head1,*head2;
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

	splitList(head,&head1,&head2);
	return 0;
}

