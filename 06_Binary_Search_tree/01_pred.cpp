#include<iostream>

using namespace std ;

class Tree{
    public : 
    int val ; 
    Tree* left ; 
    Tree* right ; 

    Tree(int val){
        this->val = val ; 
        this->left = NULL ; 
        this->right = NULL ; 
    }
};
int x ; 

void helper(Tree* root){
    if(root == NULL) return;
    if(root->right == NULL){
        x = root->val ; 
        return ; 
    }
    helper(root->right) ; 
}

void helper_main(Tree* root , int key) {
    if(!root) return ; 

    helper_main(root->left , key) ;

    if(key == root->val){
        if(root->left == NULL){
            x = 0 ; 
            return ; 
        }
        else{
            helper(root->left) ; 
            return ; 
        } 
    }

    helper_main(root->right , key) ;
}



int main(){
    Tree* root = new Tree(50) ;    
    Tree* a = new Tree(30) ;    
    Tree* b = new Tree(70) ;    

    Tree* c = new Tree(20) ;    
    Tree* d = new Tree(40) ;  

    Tree* e = new Tree(60) ;    
    Tree* f = new Tree(80) ;

    root->left = a ;
    root->right = b ;
    a->left = c ;
    a->right = d ; 

    b->left = e ; 
    b->right = f ; 
    
    int key ; 
    cin >> key ; 

    helper_main(root , key) ; 
    cout << x ; 

}