#include<iostream>
using namespace std ;

int main()
{
    int arr[3] = {12 , 33 , 44} ; // inline declaration is only allowed 
    cout << arr[1] ; 

    //updating array ; 
    arr[1] = 0 ;
    cout << " " << arr[1] ; 
}