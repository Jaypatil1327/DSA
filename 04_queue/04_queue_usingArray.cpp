#include<iostream>
using namespace std ; 

class Queue {

    int f ; 
    int b ; 
    int arr[10] ; 
    public :
    Queue() { 
        f = 0 ; 
        b = 0 ; 
    } 

    void push(int n) { 

        if(b > 10) {
            cout << "Queue already full" ; 
            return ; 
        }
        arr[b] = n ; 
        b++ ; 
    }

    void pop() {
        if(f-b == 0) {
            cout << "Queue already empty " ; 
            return ; 
        }
        f++ ; 
    }

    int front() {
        if(f-b == 0) {
            cout << "Queue already empty " ; 
            return -1; 
        }
        return arr[f] ; 
    }
    int back() {
        if(f-b == 0) {
            cout << "Queue already empty " ; 
            return -1; 
        }
        return arr[ b-1] ; 
    }

    bool empty() {
        if(f-b == 0) return false ; 
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

    q.display() ; 

}