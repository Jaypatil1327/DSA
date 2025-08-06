#include<iostream>

using namespace std ; 

class Node{ 
public:
    int val ; 
    Node * next ; 

    Node(int val) {
        this->val = val ; 
        next = NULL ; 
    }
};

class Queue {

    Node* head ; 
    Node* tail ; 
    int size ; 
    public :
    Queue() { 
        head = tail = NULL ;  
        size = 0 ; 
    } 

    void push(int n) { 
        Node * temp = new Node(n) ; 

        if(size == 0) head = tail = temp ; 
        else {
            tail->next = temp ; 
            tail = tail->next ; 
        }
        size++ ; 
    }

    void pop() {
        if(size == 0) {
            cout << "Queue is already empty //" ; 
            return ; 
        }
        else {
            head = head->next ; 
            size-- ; 
        }
    }

    int front() {
        if(size == 0) {
            cout << "Queue is already empty //" ; 
            return -1 ; 
        }
        else return head->val ; 
    }
    int back() {
         if(size == 0) {
            cout << "Queue is already empty //" ; 
            return -1 ; 
        }
        else return tail->val ; 
    }

    bool empty() {
        if(size == 0) return false ; 
        return true ; 
    }

    void display() {
        Node* temp = head ;

        while(temp) {
            cout << temp->val  << " " ; 
            temp = temp->next ;  
        }
    }
} ;  


int main() {
    Queue q ; 
    q.push(10) ;
    q.push(10) ;
    q.push(10) ;
    q.push(10) ;
    q.push(10) ;
    q.push(10) ;
    q.push(10) ;
    q.push(10) ;
    q.push(10) ;
    q.push(10) ;
    q.push(20) ;


    cout << "is Empty :" << q.empty() << '\n';
    cout << "is front :" << q.front() << '\n';
    cout << "is back :" << q.back() << '\n' ;
    q.display() ; 
}


