#include<iostream>
using namespace std ; 

int main()
{
    int arr[5] ;
    cout << "Enter\n" ; 

    for(int i=0 ; i<=4 ; i++ )
    {
        cin >> arr[i] ;  
    }
    cout << "sucessfully enterd \n" ; 
    cout << "printing\n" ; 

    for(int i=0 ; i<=4 ; i++ )
    {
        cout << arr[i] <<" " ; 
    }
}