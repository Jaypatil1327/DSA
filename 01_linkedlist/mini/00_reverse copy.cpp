#include<iostream>
using namespace std ; 

class Node {
    public :
    int val ; 
    Node* next ;  
        Node(int val) {
            this->val = val ; 
            this->next = NULL ; 
        }
};
void dis(Node * head) {
    Node * temp = head ; 
    while(temp != NULL){
        cout << temp->val << " " ; 
        temp = temp->next ; 
    }
}

Node * reverseI(Node * head) {
    // using three pointer 
    Node * Next = NULL ; 
    Node * prev = NULL ; 
    Node * curr = head ; 

    while(curr) {
        Next = curr->next ; 
        curr->next = prev ; 
        prev = curr ; 
        curr = Next ; 
    }
    return prev ; 
}
int main() {
    Node *a = new Node(10) , *b = new Node(12) , *c = new Node(22) ,
    * d = new Node(15) , *e = new Node(17) , *f = new Node(52) ; 

    a->next =  b ; 
    b->next = c ; 
    c->next = d ; 
    d->next = e ;
    e->next = f ; 

    // actual code : 

    Node* x = new Node(0) ; 
    Node* temp = x ; 
    Node* x1 = a ; 

    while(a) {
        Node *y = new Node(x1->val) ; 
        temp->next = y ; 
        x1 = x1->next ; 
    }
    x = x->next ; 
    x = reverseI(x) ; 
    x1 = x ; 

    while(x) {
        if(x != x1) cout << "false : )" ; 
        else {
            x1 = x1->next ; 
            x = x->next ; 
        } 
    }
    cout << "True :)" ; 
}