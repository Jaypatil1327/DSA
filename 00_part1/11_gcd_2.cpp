#include<iostream>
using namespace std ;

int gcd( int n , int m )
{
    int hcf = 1 ;
// 12 11 10 ............. n 
    for(int i = min(n,m) ; i >= 1 ; i--) // there finding the minimum 
    {
        if(n%i==0 && m%i==0){
            hcf = i ; 
            break ; 
        } 
        // loop try to divides from 1 to n ; 
    }
    return hcf ; 
}

int main()
{
    int x , y ;
    cout << "Enter the two num : " ; 
    cin >> x >> y ; 

    cout << gcd(x , y) ;

}   