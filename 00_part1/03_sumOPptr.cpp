#include<iostream>
using namespace std ; 

int main()
{
    // sum of using pointer 

    int x,y ; 
    int *p1 = &x ; // can't be initinalized in single line 
    int *p2 = &y;
    cout << "enter the p1 :"; 
    cin >> *p1 ; 
    cout << "enter the p2 :" ; 
    cin >> *p2 ; 

// sum of ptr 
    cout << *p1 + *p2 ;  

}