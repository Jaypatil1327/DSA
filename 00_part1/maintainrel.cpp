#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,0,1,2,0,0,4,0,2} ; 
    int n = sizeof(arr)/sizeof(arr[0]) ; 
    bool flag = true ; 

    // more optimal could be two pointer approach
    for(int i = 0 ; i<=n-1 ; i++)
    {
        for(int j = 1  ; j<=n-1 ; j++ )
        {
            if(arr[j-1]==0 && arr[j]!=0) // for maintaining the relative order 
            {
                swap(arr[j] , arr[j-1]) ; 
                flag = false ; 
            }
        }
        if(flag == true) break;  
    }

    for(int i = 0 ; i<=n-1 ; i++)
    {
        cout << arr[i]<< " " ; 
    }
    
 return 0;
}