#include<iostream>
using namespace std ; 

int main()
{
    int arr[] = {1,3,5,6,7,8,10} ; 

    int x = 2 ; 

    int low = 0 ;
    int hi = 6 ; 

    while(low<=hi)
    {
        int mid = low+(hi-low)/2 ; 

        if(arr[mid]==x)
        {
            cout << arr[mid-1] ;
            return 0 ; 
        } 
        else if(arr[mid] < x ) low = mid+1 ; 
        else hi = mid-1 ;  
    }
    cout << arr[hi]; 
}