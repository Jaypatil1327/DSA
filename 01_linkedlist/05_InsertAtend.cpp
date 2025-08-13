#include<iostream>
using namespace std ;

class Node {

    public :
    int val ; 
    Node* next ; 

    Node(int val) {
        this->next = NULL ; 
        this->val = val ; 
    }
};

class Linkedlist {
    public : 
    Node * head ; 
    Node * tail ; 
    int size ; 

    Linkedlist(){
        head = tail = NULL ; 
        size = 0 ; 
    }

    /// Creating function to insert at end 

    void insertAtend(int val) {
        Node* temp = new Node(val) ; 

        if(size == 0){
            head = tail = temp ;
 
        }
        else {
            tail->next = temp ; 
            tail = temp ; 

        }
        size++ ; 
    }

    void display(){
        Node * ans = head ; 
        while(ans != NULL) {
            cout << ans->val << " -->  "; 
            ans = ans->next ; 
        }
    }
};

Node* insertatEnd(Node* a , int x) {
    Node* temp = a ; 
    while(temp->next != NULL) temp = temp->next ; 
    temp->next = new Node(x) ; 
    return a;  
}

void display(Node* a){
        Node * ans = a ; 
        while(ans != NULL) {
            cout << ans->val << " -->  "; 
            ans = ans->next ; 
        }
    }

void insertAtidx(Node* head , int idx , int val) {
    Node * ins = new Node(val) ; 
    Node  * temp = head ; 
    for(int i = 1 ; i < idx - 1 ; i++) temp = temp->next ; 

    ins->next = temp->next ; 
    temp->next = ins ; 

    display(head) ; 
}

int main() {
    Linkedlist ll ; 
    ll.insertAtend(10) ; 
    ll.insertAtend(20) ; 
    ll.insertAtend(30) ; 
    ll.insertAtend(40) ; 
    ll.insertAtend(50) ; 
    ll.insertAtend(60) ; 
    ll.insertAtend(70) ; 
    ll.insertAtend(80) ; 
    ll.insertAtend(90) ; 
    ll.insertAtend(200) ; 

    ll.display();

    // ll.display() ; 


    // Method 2 : 

    // Node* a = new Node(10) ; 
    // Node* b = new Node(20) ; 
    // Node* c = new Node(30) ; 
    // Node* d = new Node(14) ; 
    // Node* e = new Node(40) ; 

    // a->next = b ; 
    // b->next = c ; 
    // c->next = d ;
    // d->next = e ; 

    // cout << "What to insert : " ; 
    // int x ; 
    // cin >> x ;  

    // insertAtidx(a , 2, x); 

}