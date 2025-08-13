#include<iostream>
using namespace std;

class Nodes { // linkedlist node 
public :
    int val ; 
    Nodes* next ; 

    Nodes(int val) {
        this-> val = val ;
        this-> next = NULL ; 
    }
};

int main() {
    
    Nodes a(12) ; 
    Nodes b(13) ; 
    Nodes c(14) ; 
    Nodes d(15) ; 

    // forming linkedlist 
    a.next = &b ; 
    b.next = &c ; 
    c.next = &d ; 
    
    cout << (a.next)->next->next->next ; // d 
    cout << (*a.next).val ;  // b 

}