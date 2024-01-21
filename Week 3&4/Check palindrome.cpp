#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};



bool checkPalin(Node* head)
{
    Node* temp=head;
    stack<int> s;
 
    while (temp) {
        s.push(temp->data);
        temp = temp->next;
    }
 
    while (head) {
        int top=s.top();
        s.pop();
        if (head->data!=top) {
            return false;
        }
 
        head=head->next;
    }
 
    return true;
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

	checkPalin(head)? cout<<"Palindrome" : cout<<"Not palindrome";
	return 0;
}
