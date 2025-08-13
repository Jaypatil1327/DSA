#include<iostream>
#include<climits>
#include<stack>
#include<vector>
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

void Preorder(Node* root){

    cout << "Preorder : " ; 
    stack<Node*> s ; 
    s.push(root) ; 

    while(!s.empty()){
        Node* temp = s.top() ; 
        s.pop() ; 

        // steps 
        cout << temp->val << " "; 

        if(temp->right) s.push(temp->right) ; 
        if(temp->left) s.push(temp->left) ; 
    }
    cout << '\n' ; 
}

void Postorder(Node* root){

    cout << "Postorder : " ; 
    stack<Node*> s ; 
    vector<int> v ; 
    s.push(root) ; 

    while(!s.empty()){
        Node* temp = s.top() ; 
        s.pop() ; 

        // steps 
        v.push_back(temp->val)  ; 

        if(temp->left) s.push(temp->left) ; 
        if(temp->right) s.push(temp->right) ; 
    }

    for(int i = v.size()-1 ; i >= 0 ; i--) cout << v[i] << " " ;

}

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

    stack<Node*> s ; 
    s.push(a) ; 

    Preorder(a) ; 
    Postorder(a); 


}