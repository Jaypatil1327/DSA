#include<iostream>
#include<climits>
using namespace std ; 

int main()
{
    int n ; 
    cout << "Enter the size of arr: ";
    cin >> n ;
    int arr[n] ; 
    cout << "enter into array \n" ; 

    for(int i=0 ; i<=n-1 ; i++)
    {
        cin >> arr[i] ; 
    } 

    int x ; 
    cout << "Greater than this num : " ; 
    cin >> x ; 

    int count = 0 ; 
    int max = x ; 

    for(int i=0; i<=n-1 ; i++)
    {
        if(max<arr[i])
        {   
            cout << arr[i]  << " "; 
            count++ ; 
        }
    }

    cout << count  << "are greater than" << x ; 
}