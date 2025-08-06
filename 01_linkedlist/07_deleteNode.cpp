#include<iostream>
using namespace std ; 

class Node {
    public :
    int val ; 
    Node* next ; 

    Node(int val)  {
        this->val = val ; 
        this->next = NULL ; 
    }
};

void dispaly(Node* head) {
    if(head == NULL) return ; 
    cout << head->val << " " ; 
    dispaly(head->next) ; 
}

Node* deleteNodes(Node* head , int target) {
    if(head->val == target) return(head->next) ; 
    while(head->next->val != target) { 
        head = head->next ; 
    }
    head->next = head->next->next ; 
    return head ; 
}

int main() {
    Node* a = new Node(10); 
    Node* b = new Node(20); 
    Node* c = new Node(30); 
    Node* d = new Node(40); 
    Node* e = new Node(50); 
    Node* f = new Node(60); 
    Node* g = new Node(70);
    
    a->next = b ;
    b->next = c ; 
    c->next = d ;
    d->next = e ; 
    e->next = f ; 
    f->next = g ; 

    dispaly(a) ; 
    cout << endl; 
    a = deleteNodes(a,10) ; 
    dispaly(a) ; 

    
}