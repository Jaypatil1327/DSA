#include<iostream>
using namespace std ;

int main()
{
    int a ; 
    cout << "enter\n" ; 
    cin >> a ; 

    // for(int i = 1 ; i<=a ; i++)
    // {   
    //     int n = 1 ; 
    //     for(int j = 1 ; j <= i ; j++) // method two give argumnts which are already for odd number 2 x i - 1 = odd and incresed by 2 we we can get next odd num 
        
    //     {
    //         cout << n ;
    //         n+=2;
    //     }
    //     cout << endl ; 
    // }

    for(int i = 1 ; i<=a ; i++)
    {
        int count = 1 ; 
        for(int j = 1 ; j <= i ; j++)
        {
            cout << count ; 
            count+=2 ;
        }
        cout << endl ;
    }

}