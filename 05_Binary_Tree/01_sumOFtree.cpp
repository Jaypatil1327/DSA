#include<iostream>

using namespace std ;

class Tree {
    public : 
        int val ; 
        Tree* right ; 
        Tree* left ; 

        Tree(int val) {
            this->left = NULL ; 
            this->right = NULL ; 
            this->val = val ; 
        } 
}; 

int sum(Tree* root){
    if(!root) return 0 ; 

    int leftSum = sum(root->left) ; 
    int rightSum = sum(root->right) ; 

    return root->val + leftSum + rightSum ;
}

int main(){
    Tree* a = new Tree(1) ; 
    Tree* b = new Tree(2) ; 
    Tree* c = new Tree(3) ; 
    Tree* d = new Tree(4) ; 
    Tree* e = new Tree(5) ; 
    Tree* f = new Tree(6) ; 
    Tree* g = new Tree(7) ; 
    
    a->left = b ; 
    a->right = c ; 

    b->left = d ;
    b->right = e ; 

    c->left = f ;
    c->right = g ;

    cout << "Sum of Binary Tree is " << sum(a) ;  

}