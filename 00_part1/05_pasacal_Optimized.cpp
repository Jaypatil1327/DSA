#include<iostream>
using namespace std ; 

int main()
{
    int n ; 
    cout << "Enter \n" ; 
    cin >> n ; 

    for(int i = 0 ; i <= n ; i++)
    {
        int cur = 1 ; // n C 0 = 1 

        for(int j = 0 ; j <= i ; j++)
        {
            cout << cur << " "; 
            cur = cur * (i-j)/(1+j) ; 
            // from the formula of n C r+1 
            // we multiply previous value into formula 
            
        }
        cout << endl ;     
    }
}