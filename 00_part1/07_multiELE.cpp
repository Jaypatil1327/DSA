#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,1,3,2,5} ; 

    int res = 0 ; 

    for(int i : arr)
    {
        res = res ^ i ;
    }

    int k = 0 ; 
    int temp = res ; 

    while(true)
    {
        if((temp & 1) == 1) break;
        k++ ;
        temp = temp >> 1 ; 
    }
    int num1  = 0 ;
    for(int i = 0 ; i < 6 ;i++)
    {
        if(( arr[i] >> k ) == 1) num1 = num1 ^ arr[i] ; 
    }

    cout << num1  << endl ; 
    int num2 = res ^ num1 ; 
    cout << num2 ; 

 return 0;
}