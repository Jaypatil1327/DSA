#include<iostream>
using namespace std;

int min_pow(int n )
{
    n = n | (n >> 1) ;
    n = n | (n >> 2 );
    n = n | (n >> 4 );
    n = n | (n >> 8 );
    n = n | (n >> 16) ;

    cout << "ans from function  : " << ((n+1) >> 1)  << endl ;  
}
int main()
{
    int n ; 
    cin >> n ; 
    int temp ; 
    min_pow(n) ; 

    while(n > 0) // for min temp and for max temp *2 ; 
    {
        temp = n ; 
        n = n & (n-1) ; 
    }
    cout << "minimum is : " <<  temp  << endl ; 
    cout << "Maximum is : " <<  2*temp ; 
    
 return 0;
}