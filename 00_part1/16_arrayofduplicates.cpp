#include<iostream>
using namespace std;

void input(int arr[] ,int n)
{
    for(int i = 0 ; i <= n-1; i++)
    {   
        cin >> arr[i] ;  
    }
}

void dis(int arr[] , int n )
{
    for(int i = 0 ; i <= n-1 ; i++)
    {
        cout << arr[i]<< " " ; 
    }
    cout << endl ; 
}


int main()
{
    int n ; 
    cout << "Enter the size of arr" ; 
    cin >> n ; 
 
    int arr[n] ;
    int arr2[n]={};// createing array of 0 
    input(arr , n);   

// itrate from 0 to n-2 for avoid repetation 
    for(int i = 0 ; i<=n-2 ; i++)
    {  

    //  from 1 to n-2 
        for(int j = i+1 ; j <= n-1 ; j++)
        {
            if(arr[i]==arr[j]) // matches if they are equal or not 
            { 
                // inserting elements to empty array2 ; 
                arr2[i]= arr[i] ; 
                arr2[j]= arr[j] ;
              
            }
        }
    }

    dis(arr2,n); // display func 

    for(int i = 0 ; i <= n-1  ; i++)
    {
        if(arr2 != 0 )
        {
            cout << arr2[i]; 

        }
    }
 return 0;
}
