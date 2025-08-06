#include<iostream>
#include<queue>
#include<stack>

using namespace std ; 

int main() {
    queue<int> q ; 
    stack<int> s ; 

    q.push(1) ; 
    q.push(2) ; 
    q.push(3) ; 
    q.push(4) ; 
    q.push(5) ; 
    q.push(6) ; 
    q.push(7) ; 
    q.push(8) ; 

    int qSize = q.size();

   for(int i = 0; i < qSize; i++) {
        s.push(q.front());
        q.pop();
    }
    
    // Step 2: Transfer all elements back from stack to queue (reversed order)
    int sSize = s.size();  // Store the initial size of the stack
    for(int i = 0; i < sSize; i++) {
        q.push(s.top());
        s.pop();
    }

    // Step 3: Print the elements of the queue
    int printSize = q.size();  // Store the current size of the queue
    for(int i = 0; i < printSize; i++) {
        cout << q.front() << " ";
        q.push(q.front());  // Move front element to back to maintain order
        q.pop();
    }
}