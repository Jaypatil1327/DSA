#include<iostream>
using namespace std ; 

int main()
{
    int x = 5 ;
    int* p = &x; // pointer variable 
    cout << &x << endl ; // address of x 
    cout << p << endl ; // whats stored into p ? 
    cout << *p  ; // dereferece operator 

    // int x = 12 ; 
    // int*p = &x ; 

    // cout << x << endl ; 

    // (*p)++ ; 
    // cout << x << endl ;

    // *p=12 ;
    // cout << x ; 

}
