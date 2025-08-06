#include<iostream>

using namespace std ; 

int main()
{
    int arr[5] = {12 , 14 ,65 ,56 ,7}; 
    int* ptr = arr ; 

// note : important concept when we use dereference opertor in loop after loop its gets lost in and code we need to declare it again 

    cout << *ptr << endl ; 
    
    for(int i = 0 ; i <= 4 ; i++)
    {
        cout << *ptr << " " ; 
        ptr++ ; 
    }

    cout << ptr << endl ; // lost pointer 
    // ptr = arr ;// intializied again 
    ptr = arr ; 
    cout << ptr[0] ; 

}