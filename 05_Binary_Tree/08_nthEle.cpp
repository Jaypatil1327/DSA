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

void Traversal(Tree* root , int lvl , int curr){
    if(root == NULL) return ; 

    if(lvl == curr) {
        cout << root->val << " " ; 
        return ; 
    }
    Traversal(root->left , lvl , curr+1) ; 
    Traversal(root->right , lvl , curr+1) ; 
}

// calculate Level of Tree 

int level(Tree* root){
    if(!root) return 0 ; 
    int lst = level(root->left) ; 
    int rst = level(root->right) ; 

    return 1+ max(lst , rst) ; 
}

void NthorderTraversal(Tree * root) {
    int lvl = level(root) ; 

    for(int i = 1 ; i <= lvl ; i++) {
        Traversal(root , i , 1) ;
        cout << endl ; 
    }
}

int main(){

    Tree* root = new Tree(1);
    Tree* level1_left = new Tree(2);
    Tree* level1_right = new Tree(3);
    
    Tree* level2_left_left = new Tree(4);
    Tree* level2_left_right = new Tree(5);
    Tree* level2_right_left = new Tree(6);
    Tree* level2_right_right = new Tree(7);

    Tree* level3_left_left_left = new Tree(8);
    Tree* level3_left_left_right = new Tree(9);
    Tree* level3_left_right_left = new Tree(10);
    Tree* level3_left_right_right = new Tree(11);
    Tree* level3_right_left_left = new Tree(12);
    Tree* level3_right_left_right = new Tree(13);
    Tree* level3_right_right_left = new Tree(14);
    Tree* level3_right_right_right = new Tree(15);
    
    // Link the nodes
    root->left = level1_left;
    root->right = level1_right;

    level1_left->left = level2_left_left;
    level1_left->right = level2_left_right;
    level1_right->left = level2_right_left;
    level1_right->right = level2_right_right;

    level2_left_left->left = level3_left_left_left;
    level2_left_left->right = level3_left_left_right;
    level2_left_right->left = level3_left_right_left;
    level2_left_right->right = level3_left_right_right;
    level2_right_left->left = level3_right_left_left;
    level2_right_left->right = level3_right_left_right;
    level2_right_right->left = level3_right_right_left;
    level2_right_right->right = level3_right_right_right;

    NthorderTraversal(root) ; 
}