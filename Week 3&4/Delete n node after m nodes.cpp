#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void deleteNnodes(Node *head, int M, int N)  
{  
    Node *curr = head, *t;  
    int count;  
    while (curr)  
    {   
        for (count = 1; count < M &&  
                curr!= NULL; count++)  
            curr = curr->next;  
  
        if (curr == NULL)  
            return;  
  
        t = curr->next;  
        for (count = 1; count<=N && t!= NULL; count++)  
        {  
            Node *temp = t;  
            t = t->next;  
            free(temp);  
        }  
        curr->next = t;  
        curr = t;  
    }  
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
    int num,data,m,n;
    cin>>num;
    cout<<"Enter m and n: ";
    cin>>m>>n;

    cout<<"Enter the value of nodes"<<endl;

    for(int i=0;i<num;i++)
    {
        cout<<"Enter the value: ";
        cin>>data;
        insert(&head,data);
        cout<<endl;
    }

	deleteNnodes(head,m,n);
	return 0;
}
