#include<iostream>
#include<climits>
#include<vector>
using namespace std ; 

int main()
{   

    int arr[] = {22 , 425  ,425 ,12, 245, 2, 24 ,234,3}; 
    int size = sizeof(arr)/sizeof(arr[0]) ; 

    int max = arr[0] ; 
    for(int i = 0 ; i <= size-1 ; i++)
    {
        if(max < arr[i]){ 
        max = arr[i]  ; 
        }
    }

    cout << max << endl  ; 

}