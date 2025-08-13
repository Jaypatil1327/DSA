#include<iostream>
#include<unordered_map>
#include<unordered_set>

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

void traversal(Node* root , unordered_map<Node* , Node*> mp ){
    if(root == NULL) return ; 
     
}

int main(){
    Node* root = new Node(1) ; 
    Node* a = new Node(2) ; 
    Node* b = new Node(3) ;

    Node* c = new Node(4) ; 
    Node* d = new Node(5) ; 
    Node* e = new Node(6) ; 

    Node* f = new Node(7) ; 
    Node* g = new Node(8) ; 
    Node* h = new Node(9) ; 

    root->left = a ; 
    root->right = b ; 
    b->left = f ;
    b->right = g ; 
    f->left = h ; 

    a->left = c ;
    a->right = d ; 
    d->right = e ; 

    unordered_map<Node* , Node*> mp ; 



}