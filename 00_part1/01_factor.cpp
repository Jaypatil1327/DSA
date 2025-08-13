#include<iostream>
#include<cmath>

using namespace std;

void factor(int n)
{
    for(int i = 1 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            cout << i << " " ; 
            if( sqrt(n) != n/i ) cout << n/i << " " ; 
        } 
    }
}

void sortedfac(int n)
{
    for(int i = 1 ; i < sqrt(n) ; i++)
    {
        if(n % i ==0 ) cout << i << " " ; 
    }

    for(int i = sqrt(n) ; i >= 1 ; i--)
    {
        if(n % i ==0 ) cout << n/i << " " ; 
    }

    
}
int main()
{
    int n ; 
    cin >> n ; 

    sortedfac(n) ; 
 return 0;
}