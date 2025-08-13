#include<iostream>
#include<climits>
using namespace std ; 

int main()
{
    int n ; 
    cout << "Enter the size of arr: ";
    cin >> n ;
    int arr[n] ; 
    cout << "enter into array \n" ; 

    for(int i=0 ; i<=n-1 ; i++)
    {
        cin >> arr[i] ; 
    } 
    cout << "max : " ; 

    int max = INT_MIN; // its will take lowest value of int 

    for(int i =1 ; i<=n-1 ; i++)
    {
        if(max<arr[i]) max=arr[i] ; // compareing with other arr[i] if they are greater of than or not 
    }

    int smax = INT_MIN ; 

    for(int i=1 ; i<=n-1 ; i++)
    {
        if(smax<arr[i] && max!=arr[i]) smax = arr[i] ; 
    }
    cout << max << "\n" ; 
    cout << "second max :" << smax ; 
}