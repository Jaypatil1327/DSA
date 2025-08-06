#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main() {
    queue<int> q ; 
    for(int i = 1 ; i <= 8 ; i++) q.push(i) ; 

    stack<int> s ; 

    // step1 : push First half to stack 
    
    int half = q.size()/2 ; 

    for(int i = 1 ; i <= half ; i++){
        s.push(q.front()) ; 
        q.pop() ; 
    }

    while(s.size()) {
        q.push(s.top()) ; 
        s.pop() ; 
    }

    // step 2 : add again first half to stack 
     
    for(int i = 1 ; i <= half ; i++) {
        s.push(q.front()) ; 
        q.pop() ;
    }

    // step 3 : ADD push one from stack and one from 

    while(s.size()) {
        q.push(s.top()) ; 
        s.pop() ; 
        q.push(q.front()) ; 
        q.pop() ; 
    }

    // step 4 : reverse queue 

    while(q.size()){
        s.push(q.front()) ;
        q.pop() ; 
    }
    
    while(s.size()){ q.push(s.top()) ; s.pop() ; }



    int size = q.size() ; 

    for(int i = 1 ; i <= size ; i++){
        cout << q.front() << " " ; 
        q.push(q.front()) ; 
        q.pop() ; 
    } 

    return 0;
}
