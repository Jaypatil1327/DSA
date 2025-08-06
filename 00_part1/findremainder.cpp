#include<bits/stdc++.h>
using namespace std  ; 

int main(){
    // using formula divd = div * quo + rem ; 
    int a , b , q , r ;                   // a = divident  , b = divisor  , q = quotient  , r = remaindar
    cout << "enter" << endl ; 
    cin >> a >> b ; 
    q = a/b ; 
    
    r = a - (b*q) ; 
    cout << r  << endl << endl  ;

    // using modulo op ; 
    cout << a%b ; 
    // return 0 ; 
}