#include<iostream>
using namespace std ; 

class Node {
    public : 
        int val ;
        Node * next ; 

        Node(int val) {
            this->next = NULL ;  
            this->val = val ; 
        }
};

int main(){
    int x ; 
    cout << "Enter the size of LL to create : " ; 
    cin >> x ; 

    Node* head = new Node(0) ; 
    Node* temp = head ; 

    for(int i = 1 ; i <= x ; i++){
        int val ; 
        cout << "Enter the data of node " << i << " : " ; 
        cin >> val ; 
        Node* inner = new Node(val) ; 
        temp->next = inner ; 
        temp = temp->next ; 
    }
    head = head->next ; 

    // display LL 
    while(head){
        if(!head->next){ 
            cout << head->val ; 
        }
        else {
            cout << head->val << "-> " ;
        }
        head = head->next ; 
    }
    if(!head) cout << "\n" << "Its NULL" ; 
}
