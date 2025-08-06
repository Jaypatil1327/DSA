#include<iostream>
#include<climits>
using namespace std ;

int main()
{
    int x = INT_MAX ; 
    int y = INT_MAX-1 ; 
    int c = x + y  ; 

    cout << "Enter the general : " <<  c%2 << endl  ;

    cout << "using modulo arthimetic : " << (x%2 + y%2)%2 ; 
}