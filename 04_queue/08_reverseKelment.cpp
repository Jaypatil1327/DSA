#include<iostream>
#include<queue>
#include<stack> 

using namespace std ; 


int main() {
    stack<int> s ;
    queue<int> q ; 

    q.push(10) ; 
    q.push(20) ; 
    q.push(30) ; 
    q.push(40) ; 
    q.push(50) ; 
    q.push(60) ; 

    int k = 2 ; 

    int n = q.size() ; 
    int i = 0 ; 
    
    for(int i = 0 ; i < n ; i++) {
        if(i < k) {
            s.push(q.front()) ; 
            q.pop() ; 
            if(k-1 == i){ 
                while(!s.empty()) {
                    q.push(s.top()) ; 
                    s.pop() ; 
                }
            }
        }
        else {
            q.push(q.front()) ; 
            q.pop() ; 
        } 
    }

    for(int i = 0 ; i < n ; i++){
        cout << q.front() << " " ; 
        q.pop() ; 
    }

}