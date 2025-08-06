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
    Node *a = new Node(1) , *b = new Node(2) , *c = new Node(3) ,
    * d = new Node(6) , *e = new Node(5) , *f = new Node(6) ; 

    a->next =  b ; 
    b->next = c ; 
    c->next = d ; 
    d->next = e ; 
    e->next = f ; 

    int left = 2 ; 
    int right = 4 ; 
    Node* st = NULL ;
    Node* st2 = NULL ; 
    Node* ed1 = NULL ; 
    Node* ed = NULL ; 
    Node * temp = a ;

    int n = 1 ; 
    while(temp) {
        if(left-1 == n) st = temp ; 
        if(left == n) st2 = temp ; 
        if(right == n) ed1 = temp ; 
        if(right+1  == n) ed= temp ; 
        n++ ; 
        temp = temp->next ; 
    }

    dis(st) ;
    dis(st2) ;
    dis(ed1) ;
    dis(ed) ;


}
