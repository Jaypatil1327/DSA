#include<iostream>
using namespace std ;

int main()
{
    int n ; 
    cin >> n ; 
    int m = n-1  ; 

    for(int i = 1 ; i <= m ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            if(j==i || j+i == m+1) cout << " * " ; 
            else cout << "   " ;
             
        }

        cout << endl ; 
    }

}