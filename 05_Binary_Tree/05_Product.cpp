#include<iostream>
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

int Product(Node* root){
    if(!root) return 1 ;
    int lst = Product(root->left) ; 
    int rst = Product(root->right) ; 

    return root->val * lst * rst ; 

}

int main(){
    Node* a = new Node(1) ; 
    Node* b = new Node(2) ; 
    Node* c = new Node(3) ; 

    Node* d = new Node(4) ; 
    Node* e = new Node(5) ; 

    Node* g = new Node(6) ; 
    Node* f = new Node(7) ; 

    a->left = b ;
    a->right = c ;

    b->left = d ; 
    b->right = e ;
     
    c->left = g ;
    c->right = f ; 

    cout << Product(a) ; 

}