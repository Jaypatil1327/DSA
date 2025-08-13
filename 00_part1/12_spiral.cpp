#include<iostream>
using namespace std ; 

int main()
{
    int m ; 
    cout << "Enter the num of rows :" ;
    cin >> m ; 

    int n ;
    cout << "Enter the num of col :" ; 
    cin >> n ;

    int arr[m][n] ;

    for(int i = 0 ; i<=m-1 ; i++)
    {
        for(int j = 0 ; j<=n-1 ; j++)
        {
            cin >> arr[i][j] ; 
        }
    } 

    int minc = 0 ; 
    int minr = 0 ; 
    int maxc = n-1 ; 
    int maxr = m-1 ; 

// their are two ways to make it efficient  
// using count and if else 

int total = n*m ; // ---> total num of elements ;
int count = 0 ; 

    while(minc<=maxc && minr<= maxr && count<=total)
    {
        for(int i = minc ; i<= maxc && count < total ; i++)
        {
            cout << arr[minr][i] << " " ; 
            count++ ; 
        }
        minr++ ;

        for(int i = minr ; i<=maxr && count < total ; i++)
        {
            cout << arr[i][maxc]  << " " ; 
            count++ ; 
        }
        maxc-- ; 

        for(int i = maxc ; i >= minc && count < total; i--)
        {
            cout << arr[maxr][i] << " " ;
            count++ ; 
        }
        maxr-- ; 

        for(int i = maxr ; i>=minr && count < total ; i--)
        {
            cout << arr[i][minc] << " " ;
            count++ ; 
        }
        minc++ ; 
    } 
 
}