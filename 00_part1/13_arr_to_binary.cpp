#include<iostream>
using namespace std ; 

int main()
{
    int arr[] = {1,1,1,0} ; 

    int sum = 0 ; 
    for(int i = 3 , j=1 ; i>= 0 ; i--)
    {
        sum=sum + arr[i]*j ; 
        j*=2 ; 
    }
    cout << sum ; 
}