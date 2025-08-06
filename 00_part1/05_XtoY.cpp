#include<iostream>
using namespace std ;

void minFlip(int n , int m)
{
    int count = 0 ; 
    int Xor = n ^ m ; 

    while(Xor > 0)
    {
        Xor = Xor & Xor-1 ; 
        count++ ; 
    }
    
    cout << count ; 
}
int main()
{
    int x , y ; 
    cout << "Enter num 1 : " ; cin >> x ;
    cout << "Enter num 2 : " ; cin >> y ;

    minFlip(x,y) ; 
}