#include<iostream>
using namespace std  ;

int fact(int n)
{
    int fact = 1 ;

    for(int i = 2 ; i <= n ; i++)
    {
        fact *=i ; 
    }
    return fact ; 
}

int combination(int n ,int r)
{
    int comb = fact(n)/(fact(r)*fact(n-r)) ;
}

int main()
{
    int n  ; 
    cout << "Enter\n" ; 
    cin >> n  ;

    for(int i = 1 ; i <= n ; i++ )
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cout << combination(i , j ) << " " ; 
        }

        cout << endl ; 
    }

}