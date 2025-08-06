#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,1,3,2,3,2,4,4,7} ; 
    int x = 0   ; 

    for(int i = 0 ; i < 9 ; i++)
    {
        x = x ^ arr[i]; 
    }

    cout << x ;

 return 0;
}