#include<iostream>
#include<queue>
#include<climits>

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

void display(Tree* root){

    queue<Tree*> q ; 
    q.push(root) ; 

    while(!q.empty()){
        cout << q.front()->val << " " ; 

        Tree* temp = q.front() ; 
        q.pop() ; 

        if(temp->left != NULL) {
            q.push(temp->left) ; 
        }
        if(temp->right != NULL) {
            q.push(temp->right) ; 
        }
    }
}

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
    int NLL = INT_MIN ; 
    int arr[] = {1,2,3,4,5,6,7,8 ,NLL,9,10,NLL,11,12,NLL,13,NLL,14,15,NLL,16,17,18,19,20,21,22,23,NLL,NLL,24,NLL,25,NLL,26,27,28,29,30,31,32,33,34,35,36,37,38} ; 

    int n = sizeof(arr)/ sizeof(arr[0]) ; 

    queue<Tree*> q ; 
    Tree * root = new Tree(arr[0]) ; 
    q.push(root) ; 

    int i = 1 ; 
    int j = 2 ; 

    while(i < n || j < n) {
        if (q.empty()) {
            break; // Exit if the queue is empty
        }

        Tree* temp = q.front() ; 
        q.pop() ; 

        if(arr[i] != INT_MIN && i < n){
            Tree* lt = new Tree(arr[i]) ; 
            temp->left = lt ; 
            q.push(temp->left) ; 
        }
        if(arr[j] != INT_MIN && j < n){
            Tree* rt = new Tree(arr[j]) ; 
            temp->right = rt ; 
            q.push(temp->right) ; 
        }
        else{
            if(arr[i] == INT_MIN) temp->left = NULL ; 
            if(arr[j] == INT_MIN) temp->right = NULL ; 
        }
        i+=2 ; 
        j+=2 ; 
    }

    NthorderTraversal()

}