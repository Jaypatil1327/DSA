#include<iostream>
#include<climits>
#include<queue>

using namespace std ;

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


int main(){
    Node* a = new Node(1) ; 
    Node* b = new Node(2) ; 
    Node* c = new Node(3) ; 

    Node* d = new Node(4) ; 
    Node* e = new Node(5) ; 

    Node* g = new Node(6) ; 
    Node* f = new Node(7 ) ; 

    a->left = b ;
    a->right = c ;

    b->left = d ; 
    b->right = e ;
     
    c->left = g ;
    c->right = f ; 

    queue<Node*> q ; 

    q.push(a) ; 

    while(!q.empty()){
        cout << q.front()->val ; 

        Node* temp = q.front() ; 
        q.pop() ; 

        if(temp->left != NULL) {
            q.push(temp->left) ; 
        }
        if(temp->right != NULL) {
            q.push(temp->right) ; 
        }
    }

}