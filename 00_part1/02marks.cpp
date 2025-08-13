#include<iostream>
using namespace std ;

int main()
{   
    int n ;
    cout << "Enter num of students \n" ; 
    cin >> n ; 
    int marks[n] ; 

    for(int i = 0 ; i<=(n-1) ; i++)
    {
        cin >> marks[i] ; 
    }

    for(int i = 0 ; i <=(n-1) ; i++)
    {
        if(marks[i]<= 35) cout << i+1 << " " ; 
        else continue;
    }


}