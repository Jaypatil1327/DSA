#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,2,4,4,6,6,6,7} ; 

    // int i = 1 ; 
    // int freq = 1 ; 
    // int max = 0 ; 


    // while(i <= 9 )
    // {
    //     if(arr[i]==arr[i-1]) freq++ ; 
    //     else
    //     {
    //         cout << arr[i-1] << "=" <<  freq << " " ;
    //         if(freq > max) max = freq  ; 
    //         freq = 1 ;  
    //     }
    //     i++ ;
    // }
    // cout <<endl <<  max ; 

    int size = sizeof(arr)/sizeof(arr[0]) ; 

    int temp[size+1] = {0} ; 

    for(int i = 1 ; i < size ; i++)
    {
        if(arr[i]==arr[i-1]) temp[arr[i]]++ ; 
    }

    for(int i = 0 ; i < size+1 ; i++)
    {
        if(temp[i]!=0) cout << temp[i] << " " ; 
    }
 return 0;
}