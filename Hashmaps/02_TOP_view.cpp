#include<queue>
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ; 


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

int main(){
    Tree* a = new Tree(1) ; 
    Tree* b = new Tree(2) ; 
    Tree* c = new Tree(3) ; 
    Tree* d = new Tree(4) ; 
    Tree* e = new Tree(5) ; 
    Tree* f = new Tree(6) ; 
    
    a->left = b ; 
    a->right = c ; 

    b->left = d ; 
    b->right = e ; 

    c->right = f ; 

    queue< pair<Tree * , int> >q ; 
    q.push(make_pair(a,0)) ; 

    unordered_map<int,int> mp ; 
    mp[0] = a->val ; 

    while(!q.empty()){

        Tree* temp = q.front().first ;
        int num = q.front().second ;
        if(mp.find(num) == mp.end()) mp[num] = temp->val ; 

        q.pop() ; 

        if(temp->left != NULL){
            q.push(make_pair(temp->left , num-1)) ;
 
        }
        if(temp->right != NULL) {
            q.push(make_pair(temp->right , num+1)) ; 
        }
    }

    for(auto i : mp){
        cout << i.first << "  "  << i.second << endl;   
    }

}