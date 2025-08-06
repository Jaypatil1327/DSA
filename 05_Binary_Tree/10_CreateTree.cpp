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

int main(){
    int NLL = INT_MIN ; 
    int arr[] = {1,2,3,4,5,NLL,6 ,NLL,NLL,7,8,9} ; 

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
    display(root) ; 
}