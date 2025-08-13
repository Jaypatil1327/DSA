#include<iostream>
using namespace std ; 

int main()
{
    int m , n ;
    cout << "Enter the matrix 1 row : " ;
    cin >> m ;
    cout << "Enter the matrix 1 col :" ; 
    cin >> n ;

    int p , q ;
    cout << "Enter the matrix 2 row : " ;
    cin >> p ;
    cout << "Enter the matrix 2 col :" ; 
    cin >> q ;

    if(p != n)
    {
        cout << "can't be multiplied" ;
        return 0 ; 
    }

    else{
        int arr1[m][n];
        int arr2[p][q];

        for(int i = 0 ; i<=m-1 ;i++)
        {
            for(int j = 0 ; j<=n-1 ; j++)
            {
                cin >> arr1[i][j];
            }
        }

        for(int i = 0 ; i<=p-1 ;i++)
        {
            for(int j = 0 ; j<=q-1 ; j++)
            {
                cin >> arr2[i][j];
            }
        }

        int rev[m][q] = {} ; 

        for(int i = 0 ; i<=m-1 ; i++)
        {
            for(int j = 0 ; j<= q-1 ; j++)
            {
                for(int k = 0 ; k <= p-1 ; k++)
                {
                    rev[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }

        for(int i = 0 ; i<=m-1 ;i++)
        {
            for(int j = 0 ; j<=q-1 ; j++)
            {
                cout << rev[i][j] << " ";
            }
            cout << endl ; 
        }

    }
    
}