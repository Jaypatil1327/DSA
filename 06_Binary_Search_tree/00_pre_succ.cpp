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

void helper(Tree* root , vector<int> & v){
    if(root == NULL) return ; 
    helper(root->left , v) ; 
    v.push_back(root->val) ; 
    helper(root->right , v) ; 
}

void helper_main(Tree* root , int key){
    vector<int> ans ; 
    helper(root , ans) ; 

    int i = 0 ; 
    while(ans[i] != key ){ i++ ; }
    
    cout << "Predecessor : " << ans[i-1] << endl ; 
    cout << "Sucessor : " << ans[i+1] << endl ; 
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
    int x ; 
    cout << "Enter key " ; 
    cin >> x ;
    helper_main(root , x) ; 

}