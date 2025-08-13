#include<iostream>
using namespace std; 

void print(int n)
{   
    cout << n << endl ;
    if(n==1) return ;
    else print(n-1) ; 

}

int main()
{
    int n ; 
    cin >> n ;

    print(n) ; 
}