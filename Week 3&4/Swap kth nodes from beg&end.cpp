#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

Node* swapNodes(Node* head, int k) {
        int count = 0;
        Node* curr = head;
        while(curr)
        {
            count++;
            curr = curr->next;
        }
        int n = count - k + 1;
        Node* begin = NULL, *end = NULL;
        count = 0;
        curr = head;
        while(curr)
        {
            count++;
            if(count == k)
            {
                begin = curr;
            }
            if(count == n)
            {
                end = curr;
            }
            if(end != NULL && begin != NULL)
              break;
            curr = curr->next;
        }
        swap(begin->data,end->data);
        return head;
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
    cout<<"Enter the no. of nodes and k: ";
    int n,k,data;
    cin>>n>>k;

    cout<<"Enter the dataue of nodes"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the dataue: ";
        cin>>data;
        insert(&head,data);
        cout<<endl;

    }

	swapNodes(head,k);
	return 0;
}
