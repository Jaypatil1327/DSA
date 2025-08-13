#include<iostream> 
using namespace std ; 

class Node {
    public : 
    int val ;
    Node * next ; 
        Node(int val) {
            this->val = val ; 
            this->next = NULL ; 
        }
}; 

void reverse(Node** head) {
    Node* prev = NULL;  // To store the previous node
    Node* curr = *head; // To traverse through the list
    Node* Next = NULL;  // To store the next node temporarily

    while (curr) {
        Next = curr->next; // Save the next node
        curr->next = prev; // Reverse the link
        prev = curr;       // Move prev to the current node
        curr = Next;       // Move to the next node in the list
    }

    *head = prev; // Update the head to point to the new head of the reversed list
}


void display(Node* head) {
    if(head== NULL) return ; 
    cout << head->val << " " ; 
    display(head->next) ; 
}

int main() {
    Node *a = new Node(12) ; 
    Node *b = new Node(122) ; 
    Node *c = new Node(1222) ; 
    Node *d = new Node(12222) ; 
    Node *e = new Node(122222) ; 
    Node *f = new Node(1222222) ; 
    a->next = b ; 
    b->next = c ; 
    c->next = d ; 
    e->next = f ; 

    reverse(&a) ; 
    display(a) ; 
}
