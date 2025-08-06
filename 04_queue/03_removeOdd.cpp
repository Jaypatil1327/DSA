#include<iostream>
#include<queue>
#include<stack>

using namespace std ; 

int main() {
    queue<int> q ; 

    q.push(1) ; 
    q.push(2) ; 
    q.push(3) ; 
    q.push(4) ; 
    q.push(5) ; 
    q.push(6) ; 
    q.push(7) ; 
    q.push(8) ; 
    
    int  qsize = q.size() ; 
    
    for(int i = 0 ; i < qsize ; i++){
        if(i%2==0) q.push(q.front()) ; 
        q.pop() ; 
    }
    for(int i = 0 ; i < q.size() ; i++){
        cout << q.front() << " " ; 
        q.push(q.front()) ; 
        q.pop() ; 
    }
}