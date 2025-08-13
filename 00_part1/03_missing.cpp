#include<iostream> 
using namespace std ; 

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,10} ; 
    int n = sizeof(arr)/sizeof(arr[0]) ; 

    // for(int i = 0 ; i < n ; i++)
    // {
    //     if(arr[i]==i);
    //     else{
    //         cout << i ; 
    //         break; 
    //     }
    // }

    // optimal solu 

    int low = 0 ; 
    int hi = n-1 ; 
    int ans = -1 ; 

    while(low <= hi) 
    {
        int mid = low+(hi-low)/2 ; 
        
        if(mid==arr[mid]) low = mid+1 ; 
        else{
            ans = mid ; 
            hi = mid-1 ; 
        }
    }
    cout << ans ; 

}