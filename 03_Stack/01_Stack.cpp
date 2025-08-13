#include<iostream>
#include<stack>
using namespace std ;

void reverse(stack<int> &s) {
    stack<int> temp ; 
    while(s.size()){
        temp.push(s.top()) ; 
        s.pop() ; 
    }
    s = temp ; 
}

void display(stack<int> s) {

    while(s.size()){
        cout << s.top() << " " ; 
        s.pop() ; 
    }
    cout << endl ; 
}

int main(){
    stack<int> s ; 

    s.push(10) ; 
    s.push(20) ; 
    s.push(30) ; 
    s.push(40) ; 
    s.push(50) ;

    // print stack 
    cout << "Before : " ;
    display(s) ;


    // Reverse Stack
    reverse(s) ; 


    // print stack 
    cout << "After : " ;
    display(s) ; 
    
}