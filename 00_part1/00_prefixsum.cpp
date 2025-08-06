#include<iostream>
#include<vector> 

using namespace std ; 

int main()
{
    vector<int> arr = {1,4,5,3,2,7,6}  ; 
    vector<int> pre(arr.size()) ; 

    // m1 --> O(n^2)

    for(int i = 0 ; i < arr.size() ; i++)
    {
        for(int j = 0 ; j <= i ; j++ )
        {
            pre[i]+=arr[j] ; 
        }
    }

    // m2 -- > 

    for(int i = 0 ; i < arr.size() ; i++)
    {   
        if(i==0) pre[i] = arr[i]  ; 
        else pre[i] = arr[i] + pre[i-1] ; 
    }

    for(int ele:pre) cout << ele << " " ; 

}