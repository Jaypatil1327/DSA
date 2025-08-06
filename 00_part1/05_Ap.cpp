#include<iostream>
using namespace std ; 

int main()
{
    int n ; 
    cout << "Enter the number : " ;
    cin >> n ;
    // for(int i = 1 ; i <= 2*n-1 ; i+=2)
    // {
    //     cout << i << endl  ; 
    // }
    
//method 2 :
    int a = 1 ; 
    for(int i = 1 ; i <= n ; i++)
    {
        cout << a << endl  ; 
        a+=2 ;     
    }

}