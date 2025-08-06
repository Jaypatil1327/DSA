#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cout << "Enter :" ; 
    cin >> n ; 
    if(n%2==0)
    {
        n = ++n ; 
        cout << "Warning we have fixed it \n" ; 
    }
    // int mid = (n/2) + 1 ; 

    // for(int i = 1 ; i <= n ; i++)
    // {
    //     for(int j =1 ; j <= n ; j++)
    //     {
    //         if(i==mid || j == mid) cout << " * " ; 
    //         else cout << "   ";
    //     }

    //     cout << endl ; 
    // }

    int mid = (n/2)+1 ; 


    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j<=n ; j++)
        {
            if(mid==j || mid == i ) cout << " * " ; 
            else cout << "   " ;
        }
        cout << endl ; 
    }
}