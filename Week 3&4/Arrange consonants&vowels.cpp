#include <bits/stdc++.h>
using namespace std;

struct Node {
	char data;
	struct Node* next;
    Node(char x)
    {
        data = x;
        next = NULL;
    }
};

struct Node* arrange(Node* head)
{
    Node *vowel = NULL, *consonant = NULL, *start = NULL,
         *end = NULL;
    while (head != NULL) {
        char x = head->data;
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
            || x == 'u') {
            if (!vowel) {
                vowel = new Node(x);
                start = vowel;
            }
            else {
                vowel->next = new Node(x);
                vowel = vowel->next;
            }
        }
        else {
            if (!consonant) {
                consonant = new Node(x);
                end = consonant;
            }
            else {
                consonant->next = new Node(x);
                consonant = consonant->next;
            }
        }
        head = head->next;
    }

    if (start == NULL)
        return end;
    vowel->next = end;
    return start;
}

void insert(Node** root, char item) 
{ 
    Node* temp = new Node(item); 
    Node* ptr;  
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
    int n;
    char data;
    cin>>n;

    cout<<"Enter the value of nodes"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value: ";
        cin>>data;
        insert(&head,data);
        cout<<endl;

    }

	arrange(head);
	return 0;
}


