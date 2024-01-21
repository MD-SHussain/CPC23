 #include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

Node* reverse(Node *head){
        Node* p = NULL , *q = NULL, *r = head;
        while(r!= NULL){
            p = q;
            q = r;
            r = r -> next;

            q -> next = p;
        }
        return q;
    }
void reorderList(Node* head) 
{
        if(head == NULL || head -> next == NULL){
            return ;
        }

        Node* f = head -> next, *s = head;
        while(f != NULL ){
            f = f->next;
            if(f != NULL){
                f = f->next;
                s = s->next;
            }
        }

        Node * second = reverse(s->next);
        Node * first = head;
        s->next = NULL;

        Node *ansHead = new Node(-1);
        Node * ansTail = ansHead;

        while(first && second){
            ansTail->next = first;
            ansTail = first;
            first = first->next;

            ansTail->next = second;
            ansTail = second;
            second = second->next;
        }

        if(first != NULL){
            ansTail->next = first;
            ansTail = first;
        }


        head = ansHead->next;
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

	reorderList(head);
	return 0;
}

 