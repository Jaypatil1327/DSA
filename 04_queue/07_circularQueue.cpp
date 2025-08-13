#include<iostream>
using namespace std ; 

class Queue {

    int f ; 
    int b ; 
    int size = 0 ; 
    int arr[10] ; 
    public :
    Queue() { 
        f = 0 ; 
        b = 0 ; 
        size = 0 ; 
    } 

    void push(int n) { 

        if(size == sizeof(arr) / sizeof(arr[0])) {
            cout << "Queue already full" ; 
            return ; 
        }
        arr[b] = n ; 
        b++ ; 
        size++ ; 
    }

    void pop() {
        if(size == 0) {
            cout << "Queue already empty " ; 
            return ; 
        }
        f++ ; 
        size-- ; 
    }

    int front() {
        if(size == 0) {
            cout << "Queue already empty " ; 
            return -1; 
        }
        return arr[f] ; 
    }
    int back() {
        if(size == 0) {
            cout << "Queue already empty " ; 
            return -1; 
        }
        return arr[ b-1] ; 
    }

    bool empty() {
        if(size == 0) return false ; 
        else return true ; 
    }

    void display() {
        for(int i = f ; i < b ; i++) {
            cout << arr[i]  << " "; 
        }
    }
} ;  

int main() {
    Queue q ; 

    q.push(10) ; 
    q.push(20) ; 
    q.push(30) ; 
    q.push(40) ; 
    q.push(50) ; 
    q.push(60) ; 
    q.push(70) ; 
    q.push(70) ; 
    q.push(70) ; 
    q.pop() ; 
    q.pop() ; 
    q.pop() ; 
    q.pop() ; 
    q.pop() ; 
    q.pop() ; 
    q.pop() ; 
    q.push(70) ; 
    q.push(70) ; 

    q.display() ; 

}