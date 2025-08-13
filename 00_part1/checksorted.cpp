#include<iostream>

using namespace std ; 

int main()
{
    int arr[] = {1,5,3,4,5} ; 
    bool flag = false ;
    for(int i = 1 ; i<=3 ; i++)
    {
        if(arr[i] > arr[i-1] && arr[i]<arr[i+1])  ; 
        else
        {
            flag = true ;
            break;
        }
    } 
     cout << flag ;
}