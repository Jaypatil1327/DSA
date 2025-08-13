#include<iostream>
#include<queue>

using namespace std ; 

int main() {
    queue<int> q ; 

    q.push(12) ; 
    q.push(192) ; 
    q.push(42) ; 
    q.push(32) ; 
    q.push(42) ; 
    q.push(62) ; 

    cout << "front of queue : " << q.front() << '\n'; 
    cout << "back of queue : " << q.back() << '\n'; 
    cout << "Size of queue : " << q.size() ; 
}