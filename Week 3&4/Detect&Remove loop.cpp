#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};



void detectandremove(Node* head)
{
    if (head == NULL || head->next == NULL)
        return;
 
    Node *slow = head, *fast = head;
 
    slow = slow->next;
    fast = fast->next->next;
 
    while (fast && fast->next) {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }
 
    if (slow == fast) {
        slow = head;
 
        if (slow == fast)
            while (fast->next != slow)
                fast = fast->next;
        else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }
 
        fast->next = NULL;
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

	detectandremove(head);
	return 0;
}

