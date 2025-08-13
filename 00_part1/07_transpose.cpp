#include<iostream>
using namespace std ;

int main ()
{
    int n ,m ; 
    cout << "Enter the num of row :" ; 
    cin >> n ; 
    cout << "Enter the num of columns :" ; 
    cin >> m ; 

    int arr[n][m] ; 

    for(int i = 0 ; i<=n-1  ;i++)
    {
        for(int j = 0 ; j<= m-1 ; j++)
        {
            cin >> arr[i][j] ; 
        }
    }
// given 
    for(int i = 0 ; i<=n-1  ;i++)
    {
        for(int j = 0 ; j<= m-1 ; j++)
        {
            cout <<  arr[i][j] << " " ; 
        }
        cout << endl ; 
    }

    cout << "\n" ; 

// transpose 
    for(int i = 0 ; i<=m-1  ;i++)
    {
        for(int j = 0 ; j<= n-1 ; j++)
        {
            cout << arr[j][i]  << " "  ;  
        }

        cout << endl ;
    }
}
 
