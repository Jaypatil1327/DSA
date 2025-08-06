#include<iostream>
#include<queue>
#include<stack>

using namespace std ; 

int main() {
    queue<int> q ; 

    q.push(12) ; 
    q.push(192) ; 
    q.push(42) ; 
    q.push(32) ; 
    q.push(42) ; 
    q.push(72) ; 
    q.push(82) ; 
    q.push(92) ; 
    q.push(42) ;

    for(int i = 0 ; i < q.size() ; i++){
        cout << q.front() << " " ; 
        q.push(q.front()) ; 
        q.pop() ; 
    }
}