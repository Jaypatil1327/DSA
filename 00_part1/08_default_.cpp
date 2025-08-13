#include<iostream>
using namespace std;

// default values are declared that if nothing is given it will automatically intialised at 0 

int hell0(int n = 0 , int m = 0)
// int hell0(int n = 11 , int m = 111111) 
{
    cout << n << " " << m  << endl ; 
    return m ; 
}

int main()
{
    int x , y ; 
    cout << hell0(12 , 13) ; 
}