#include<iostream>
using namespace std ; 

int main()
{
    int n ; 
    int target ; 
    cout << "Enter the array to create of : " ;
    cin >> n ; 

    int arr[n] ; 
    for(int i =0 ; i<=n-1 ; i++)
    {
        cin >> arr[i] ; 
    } 
    cout << "Target to find :";
    cin >> target ; 

    // for(int i=0 ; i<=n-1 ; i++)
    // {
    //     if(arr[i]==target){
    //         cout << i ;
    //         break;
    //     }
    //     continue;
    // }

    bool flag = false ; 
    for(int i=0 ; i<= n-1 ; i++)
    {
        if(arr[i]==target)
        {
            flag = true ; 
        }
    }

    if(flag==true) cout << "Element is present";
    else cout << "404 error " ; 

}