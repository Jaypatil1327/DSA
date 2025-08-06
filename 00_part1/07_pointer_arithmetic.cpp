#include<iostream>
using namespace std ;

int main()
{
    int x=12 ; 
    int* p = &x ; // pointing towards x 

// its increased by 4 bytes for int 

    cout << p << endl ; //0x61ff08
    p++ ; 
    cout << p ; // 0x61ff0c
    
}