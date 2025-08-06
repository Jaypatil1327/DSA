#include<iostream> 
using namespace std ; 

int main()
{
    int n ; 
    cout << "Enter the num of row/col :" ; 
    cin >> n ;
     
    int arr[n][n] ; 

    for(int i =0 ; i<= n-1 ; i++)
    {
        for(int j = 0 ; j<=n-1 ; j++)
        {
            cin >> arr[i][j] ; 
        }
    }

    for(int i =0 ; i<= n-1 ; i++)
    {
        for(int j = i+1 ; j<= n-1 ; j++)
        {
            int temp = arr[i][j] ; 
            arr[i][j] = arr[j][i] ; 
            arr[j][i] = temp ; 
        }
    }

    for(int k = 0 ; k<=n-1 ; k++)
    {    
        int i = 0 ; 
        int j = n-1 ; 

        while(i<=j)
        {
            int temp = arr[k][i] ; 
            arr[k][i] = arr[k][j]; 
            arr[k][j] = temp ; 
            i++ ; 
            j-- ;
        }

    }

    for(int i =0 ; i<= n-1 ; i++)
    {
        for(int j = 0 ; j<=n-1 ; j++)
        {
           cout <<  arr[i][j] << "   " ; 
        }
        cout << endl ; 
    }
}