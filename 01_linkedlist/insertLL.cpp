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
    cout << endl ; 
}


int main() {
    Node *a = new Node(1) , *b = new Node(2) , *c = new Node(3) ,
    * d = new Node(6) , *e = new Node(5) , *f = new Node(6) ; 

    a->next =  b ; 
    b->next = c ; 
    c->next = d ; 
    d->next = e ; 
    e->next = f ; 

    // insert a 2 ; 
    Node* temp = a;
while (temp->next) {
    temp = temp->next; // Traverse to the end of the list
}

Node* l = new Node(12);
Node* Next = temp->next; // This should be `nullptr` at the end of the list
temp->next = l; // Insert `l` after `temp`
l->next = Next; // Link `l` to `nullptr` (end of the list)

    dis(a) ; 

}