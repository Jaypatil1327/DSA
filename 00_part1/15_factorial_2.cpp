#include<iostream>
using namespace std ;

int fact( int n)
{
    int fact = 1 ; 
    for(int i = 2 ; i <= n ; i++)
    {
        fact*=i ; 
    }
    return fact ; 
}

int main()
{
    int x ; 
    cout << "Enter num 1factorial upto \n" ;
    cin >> x ; 
    
    for(int i = 1 ; i <= x ; i++){
        cout << fact(i) << " "; 
    }

}   