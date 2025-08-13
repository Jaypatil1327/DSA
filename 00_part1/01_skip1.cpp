#include<iostream>
#include<vector>

using namespace std ; 

int* skip_1s(int arr[] , int idx )  // pointer fun that will return the address
{     
    static int ans_arr[6]; // constant int 

        if(idx == 6)
        {
            return ans_arr; 
        }

    if(arr[idx]==1) skip_1s(arr , idx+1) ; 
    else
    { 
        ans_arr[idx] = arr[idx] ; 
        skip_1s(arr , idx+1) ; 
    }
}

int main() 
{
    int arr[6] = {2,3,1,1,3,2} ; 

    int* ptr = skip_1s(arr , 0) ; 

    for(int i = 0 ; i<= 5 ; i++)
    {
        cout << ptr[i] << " " ; 
    }
}