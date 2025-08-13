#include<iostream>
using namespace std ; 

int main()
{
    int  n ; 
    cout << "Enter \n" ; 
    cin >> n ; 

    for(int i = 1 ; i<=n ; i++)
    {   
        // 2-i+1 for this code we need run -1 times so ( n-i )
        for(int j = 1 ; j <= n-i ; j++) // for space triangle
        {
            cout << " " ; 
        }

        for(int k = 1 ; k <= 2*i-1 ; k++) // for * triangle 
        {
            cout << "*" ; 
        }
        
        cout << endl ; 
    }
}