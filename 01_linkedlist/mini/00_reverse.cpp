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

Node * reverseR(Node * head) {
    if(head == NULL || head->next == NULL) return head ; 
    Node * newHead = reverseR(head->next) ; 
    head->next->next = head ; 
    head->next = NULL ; 
    return newHead ;  
}

int main() {
    Node *a = new Node(10) , *b = new Node(12) , *c = new Node(22) ,
    * d = new Node(15) , *e = new Node(17) , *f = new Node(52) ; 

    a->next =  b ; 
    b->next = c ; 
    c->next = d ; 
    d->next = e ; 
    e->next = f ; 

// // reverseing the ll iterative method 
    dis(a) ; cout << endl ; 
    a = reverseI(a) ; 
    dis(a) ; cout << endl ;
// using recursion 
    dis(a) ; cout << endl ; 
    a = reverseR(a) ; 
    dis(a) ; cout << endl ;

}