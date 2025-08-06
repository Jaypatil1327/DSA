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

Tree* pred(Tree* root){
    Tree* temp = root ; 
    while(temp->right) temp = temp->right ; 
    return temp ; 
}

Tree* deletNode(Tree* root , int key){
    if(root == NULL) return NULL ; 

    if(root->val == key) {
        // case 1 : no child 
        if(root->left == NULL && root->right == NULL ) return NULL ; 

        // case 2 : one child 
        else if(root->left == NULL || root->right == NULL)
            return (root->left != NULL ? root->left : root->right) ; 
        
        // case 3 : Two child 
        else {
            Tree* del = pred(root->left) ; 
            root->val = del->val ;
            root->left = deletNode(del->left , del->val) ; 
        }
    }

    else if(root->val > key)
        root->left = deletNode(root->left , key) ; 
    
    else {
        root->right = deletNode(root->right , key) ; 
    }
    return root ; 
}

void display(Tree* root){
    if(root == NULL) return ; 
    display(root->left);
    cout << root->val << " " ;  
    display(root->right); 
  
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
    cout << "Enter the key :: " ; 
    cin >> key ; 


    root = deletNode(root , key) ; 
    display(root) ; 
}
