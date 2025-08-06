#include<iostream>
using namespace std ; 

int main()
{
    int arr[4] = {1,2,4,3} ; 
    int pivot_idx = 0 ; 

    for(int i = 2 ; i>=0 ; i--)
    {
        if(arr[i]<=arr[i+1])
        {
            pivot_idx = i ;
            break; 
          
        }
    }

    cout << pivot_idx ;
}