#include<iostream>
#include<climits> 

using namespace std ; 

int main()
{
    int arr[] = {6,5,8,1,4,3} ; 
    int n = 6 ; 

    for(int ele : arr)
    {
        cout << ele << " " ; 
    }
    cout << endl ; 

    for(int i = 0 ; i < n-1 ; i++ )
    {   
        int min = INT_MAX ; 
        int idx ; 
// finding the min element 
        for(int j = i ; j < n ; j++)
        {
            if(arr[j]<min)
            {
                min = arr[j] ; 
                idx = j ; 
            }
        }
        swap(arr[idx] , arr[i]) ; // swaping it with the current idx ; 
    }
    for(int ele : arr)
    {
        cout << ele << " " ; 
    }
}