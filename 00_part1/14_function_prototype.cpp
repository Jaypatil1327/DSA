#include<iostream>
using namespace std ;

// Its a protot ype that intialised it now and it can be used later 

int Add(int x = 0, int y = 0 ) ;

int main(){
    cout << Add(12,13);
}

// using the prototype 
int Add(int x , int y){
    return (x+y) ; 
}