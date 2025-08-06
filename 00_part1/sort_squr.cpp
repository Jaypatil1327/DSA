#include<iostream>
#include<vector> 
using namespace std ; 

int main()
{
    vector<int> arr ; 
    int n ;
    cout << "Enter the size of vec " ; cin >> n ; 
    cout << "Enter values :" ; 
    for(int i = 0 ; i<= n-1 ; i++)
    {
        int x ; 
        cin >> x ; 
        arr.push_back(x) ; 
    }

    for(int i = 0 ; i<=n-1 ;i++)
    {
        arr[i]=arr[i]*arr[i] ; 
    }

    // vector<int> ans ; 

    int i = 0 ;
    int j = arr.size()-1;

    while(i<=j)
    {
        if(arr[i]<arr[j]) j-- ; 
        else if(arr[i]>arr[j])
        {
            int temp = arr[i] ; 
            arr[i] = arr[j] ; 
            arr[j]= temp ; 
            j-- ; 
        }
        else i++ ; 
    }

    for(int i = 0 ; i<=n-1 ;i++)
    {
        cout << arr[i] << " " ;  
    }
    
}    