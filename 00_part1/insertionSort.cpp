#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,3,7,1,2,9} ; 
    int n = 6 ;
    
    for(int i = 1 ; i < n ; i++)
    {
        int j = i ; 
        while(j>=1 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]) ; 
            j-- ; 
        }
    }
    for(int print:arr)
    {
        cout << print << " " ; 
    }

 return 0;
}