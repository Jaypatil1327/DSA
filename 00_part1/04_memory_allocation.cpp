#include<iostream>
using namespace std ; 

int main()
{
    int arr[] = {12,43,76,757,344,33,23};
    int size = sizeof(arr)/sizeof(arr[1]) ; 

// printing the address of memory of arry 
    for(int i = 0 ; i<=size-1 ; i++)
    {
        cout << &arr[i] << endl ;   
    }
// address of the arr and arr[0] is same ; 
    cout << endl << arr ; 
}