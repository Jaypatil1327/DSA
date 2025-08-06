#include<iostream>
#include<climits>
using namespace std ;

class Node{
    public :
        int val ; 
        Node* left ; 
        Node* right ;

        Node(int val){
            this->val = val ;
            this->left = NULL ; 
            this->right = NULL ; 
        }
};

int mn(Node* root){
    if(!root) return INT_MAX ; 
    return (min(root->val , min(mn(root->left) ,mn(root->right) ))) ; 
}

int main(){
    Node* a = new Node(10) ; 
    Node* b = new Node(2) ; 
    Node* c = new Node(3) ; 

    Node* d = new Node(4) ; 
    Node* e = new Node(5) ; 

    Node* g = new Node(6) ; 
    Node* f = new Node(1) ; 

    a->left = b ;
    a->right = c ;

    b->left = d ; 
    b->right = e ;
     
    c->left = g ;
    c->right = f ; 

    cout << mn(a); 
    

}