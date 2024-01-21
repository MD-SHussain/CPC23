#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void mergesorting(Node** head) 
    {
        Node* curr = *head; 
        Node* first;
        Node* second;
        
        if(curr == NULL || curr -> next == NULL)
            return;
        
        findmid(curr, &first,&second);
        mergesorting(&first);    
        mergesorting(&second);  
        *head = merge(first,second);
    }
    
    void findmid(Node* curr, Node** first, Node** second)
    {
        Node* slow = curr;
        Node* fast = curr -> next;

        while(fast != NULL)
        {
            fast = fast -> next;
            if(fast != NULL)
            {
                fast = fast -> next;
                slow = slow -> next;
            }
        }
        *first = curr;
        *second = slow -> next;
        slow -> next = NULL;
    }
    
    Node* merge(Node* first, Node* second)
    {
        Node* answer = NULL;
        
        if(first == NULL)
        {
            return second;
        }
        
        if(second == NULL)
        {
            return first;
        }
        
        if(first->data<=second->data) 
        {
            answer = first;
            answer -> next = merge(first -> next, second);
        }
        else
        {
            answer = second;
            answer -> next = merge(first, second -> next);
        }
        
        return answer;
    }
    Node* sortList(Node* head) {
        mergesorting(&head); 
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

	sortList(head);
	return 0;
}

