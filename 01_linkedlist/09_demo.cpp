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

void display(Node* a){
        Node * ans = a ; 
        while(ans->next != NULL) {
            cout << ans->val << " -->  "; 
            ans = ans->next ; 
        }
        cout << "\n" << ans->val;
    }

void insertAtidx(Node* head , int idx , int val) {
    Node * ins = new Node(val) ; 
    Node  * temp = head ; 
    for(int i = 1 ; i < idx - 1 ; i++) temp = temp->next ; 

    ins->next = temp->next ; 
    temp->next = ins ; 
}

int main(){ 
    Node* a = new Node(10) ; 
    Node* b = new Node(20) ; 
    Node* c = new Node(30) ; 
    Node* d = new Node(14) ; 
    Node* e = new Node(40) ; 

    a->next = b ; 
    b->next = c ; 
    c->next = d ;
    d->next = e ; 

    Node * temp = a->next ; 
    display(temp) ; 
    cout << endl ; 
    display(a) ; 

}