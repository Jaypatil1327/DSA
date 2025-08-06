#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cout << "Enter size of array : " ; 
    cin >> n ; 
    int arr[n] ; 

    for(int i = 0 ; i<= n-1 ; i++)
    {
        cin >> arr[i] ; 
    }

    int product = arr[0] ; 

    for(int i =1 ; i <= n-1 ; i++)
    {
        product*=arr[i] ; 
    }

    cout << product ; 
    
 return 0;
}