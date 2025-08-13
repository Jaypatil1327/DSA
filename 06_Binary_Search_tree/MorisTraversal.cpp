#include<iostream>
#include<vector>

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

void MorrisTrav(Tree* root){
    while(root){
        if(root->left != NULL){
            Tree* pred = root->left ;
            while(pred->right != NULL && pred->right != root){
                pred = pred->right ; 
            }

            if(pred->right != root){
                pred->right = root ; 
                root = root->left ; 
            }
            else {
                pred->right = NULL ; 
                cout << root->val << " " ; 
                root = root->right ; 
            }
        }
        else {
            cout << root->val << " "; 
            root = root->right ; 
        }
    }
}

int main(){
    Tree* root = new Tree(10) ;    
    Tree* a = new Tree(5) ;    
    Tree* b = new Tree(3) ;    
    Tree* c = new Tree(8) ;
    Tree* d = new Tree(6) ;

    Tree* f = new Tree(15) ;
    Tree* e = new Tree(12) ;    
    Tree* g = new Tree(20) ;    
    Tree* h = new Tree(13) ;    

    root->left = a ; 
    root->right = f ; 

    a->left = b ;
    a->right = c ;

    c->left = d ; 

    f->left = e ;
    f->right = g ;
    e->right = h ; 

    MorrisTrav(root) ; 


}