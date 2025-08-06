#include<iostream>
using namespace std ; 

int x = 121 ; 

void local(int n)
{   
    int z = 12 ; 
    cout << "Its global code " << x << endl; 
    cout << "Its local vairable function " << z << endl ;
    cout << "Its global for function " << n << endl ;  
}

int main()
{
    int n = 1;
    cout << "Its the global of code " << x << endl; 
    cout << "global for main code " << n << endl ;
    local(1);
}