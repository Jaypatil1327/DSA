#include<iostream>
#include<queue> 

using namespace std ;

int main(){
    priority_queue<int> pq ; 
    pq.push(10) ; 
    pq.push(40) ; 
    pq.push(14) ; 
    pq.push(202) ; 
    pq.push(100) ; 
    pq.push(20) ; 

    cout << pq.top() ; 
    cout << " " ; pq.pop() ; 
    cout << pq.top() ; 

}