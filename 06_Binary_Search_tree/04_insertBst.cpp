#include<iostream>
using namespace std; 

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

void insert(Node*&root , int num){
    if(root == NULL){
        root = new Node(num) ; 
        return ;  
    }
    else if(root->val == num){
        cout << "Its already exist : " ; 
        return ; 
    }
    else if(root->val > num){
        insert(root->left , num) ; 
    }
    else{
        insert(root->right , num) ; 
    }
}

void Traversal(Node* root){
    if(root == NULL) return ; 
    
    cout << root->val << " " ; 
    Traversal(root->left) ;  
    Traversal(root->right) ;
}

int main(){
    Node* root = NULL; 
    insert(root , 12) ; 
    insert(root , 2) ; 
    insert(root , 42) ; 
    insert(root , 12) ; 
    insert(root , 92) ; 
    Traversal(root) ; 
}