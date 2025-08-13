#include<iostream>
using namespace std ; 

int fact(int n)
{
    if(n==1) return 1 ; 
    return n*fact(n-1) ; // it has multi works to do later  
}

int opfact(int n , int k = 1)
{
    if(n==1){
        return k ; // direct return k ; 
    }
    opfact(n-1 , k*n) ; 
}

int main()
{
    int n ; 
    cout << "Enter " ; 
    cin >> n ; 

    cout << opfact(n) ; 
}