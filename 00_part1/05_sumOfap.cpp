#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cout << "Enter \n" ; 
    cin >> n ; 
    int arr[n]; 
    for(int i =0 ; i<=n-1 ; i++)
    {
        cin >> arr[i] ;  
        // sum=sum+arr[i] ;  
    }
    int d = arr[2]-arr[1] ; 
    int sum = (n/2)*(2*arr[0]+(n-1)*d);

    cout << sum ; 
 
}