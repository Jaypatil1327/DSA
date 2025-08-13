#include<iostream>
using namespace std ;

class Node {
    public : 
        int val ; 
        Node* next ; 

        Node(int val){
            this->val = val ; 
            this->next = NULL ; 
        }
};

void display(Node * temp) {       
    if(temp == NULL) return ;
    cout << temp->val << " " ; 
    display(temp->next) ; 

}

void displayreverse(Node * temp) {       
    if(temp == NULL) return ;
    displayreverse(temp->next) ; 
    cout << temp->val << " " ; 
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

    displayreverse(a) ; 
}