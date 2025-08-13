#include<iostream>
using namespace std;

void bubble(int arr[] , int n)
{   
    if(n==0) return ; 
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i]<arr[i-1])
        {
            swap(arr[i] , arr[i-1]);
        }
    }
    return bubble(arr, n-1) ; 
}
int main()
{
    int  arr[] = {5,3,6,8,2,1} ; 
    int n = sizeof(arr)/sizeof(arr[0]) ; 

    bubble(arr , n) ; 

    for(int i = 0 ; i<n ; i++)
    {
        cout << arr[i] << " " ; 
    }

    return 0;
}
