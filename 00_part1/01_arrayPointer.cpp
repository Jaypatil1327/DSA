#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {12,4,65,76,34};
    int* ptr = arr ; 

    // method 1 of printing array ' 

    for(int i = 0 ; i <= 4 ; i++)
    {
        cout << ptr[i] << " "; 
    }
    cout << endl ;

    // method 2 of printing array ;

    *ptr = 8 ;
    for(int i = 0 ; i <= 4 ; i++)
    {
        cout << *ptr << " "; 
        ptr++ ; 
    }
    cout << endl ;


    // after this we lost the pointer so use 
    ptr = arr ;

    //method 3 of printing the array ; 

    for(int i = 0 ; i<= 4 ; i++)
    {
        cout << i[arr] << " " ; 
    } 
    cout << endl ;

    //method 4 of printing the array ; 

    for(int i = 0 ; i <= 4 ; i++)
    {
        cout << i[ptr]<< " " ; 
        // if we dont use 28 line i wont work 
    }

 return 0;
}