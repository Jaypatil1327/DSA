#include<iostream>
using namespace std; 

int sum1t0n(int sum , int n ) // parameterized form 
{
    if(n==0)
    {
        return sum ;
    }
    sum1t0n(sum+n , n-1);
}

int sum2(int n)
{
    if(n==0) return 0 ; 
    return n+sum2(n-1) ; 
}


int main()
{
    cout << sum2(4);
}  