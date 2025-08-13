#include<iostream>
using namespace std ; 

int stair(int n )
{    
    if(n==1) return 1 ; 
    if(n==2) return 2;

    int step = stair(n-1) + stair(n-2) ; 
    return step ;  
}

int main()
{
    cout << "Enter the num of steps " ; 
    int n ; 
    cin >> n ; 
    cout << stair(n) ; 
}