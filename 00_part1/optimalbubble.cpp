#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,1,6,2,3,4} ;
    int size = sizeof(arr)/sizeof(arr[0]); 
    bool flag = true ; 

    for(int i=0 ; i < size ; i++)
    {   

        for(int j = 1 ; j < size - i   ; j++)
        {
            if(arr[j-1]>arr[j]) // 
            {
                swap(arr[j],arr[j-1]); 
                flag = false ; 
            }
        }
        if(flag==true) break ; 
    }

    for(int i = 0 ; i<size ; i++)
    {
        cout << arr[i] << " " ; 
    }

 return 0;
}
