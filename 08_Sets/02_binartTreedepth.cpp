#include<iostream>
#include<map>


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


int depth(Tree* root , map<int , int>& s ){
    if(root == NULL) return 0 ; 

    int leftval= depth(root->left , s) ; 
    int rightval = depth(root->right , s) ; 

    int num = max(leftval , rightval) ; 
    s[root->val] = num ; 

    return num+1; 
}



int main(){
    Tree* a = new Tree(1) ; 
    Tree* b = new Tree(2) ; 
    Tree* c = new Tree(3) ; 
    Tree* d = new Tree(4) ; 
    Tree* e = new Tree(5) ; 
    Tree* f = new Tree(6) ; 
    Tree* g = new Tree(7) ; 

    a->left = c ; 
    a->right = d ; 

    c->left = b  ; 

    d->left = f ; 
    d->right = e ; 

    e->right = g ; 

    map<int , int> s ; 

    s[a->val] = depth(a , s) ; 

    for(auto ele : s){
        cout << ele.first << " " << ele.second ; 
        cout << endl ; 
    }


}