#include<iostream>
using namespace std ; 

int main()
{
    int n ; 
    cout << "Enter the line num : " ; 
    cin >> n ; 

    for(int i = 1 ; i <= n ; i++)
    {
        //for space ;
        for(int j = 1 ; j <= n-i ; j++)
        {   
            cout << " " ; 
        
        } 

        // triangle 
        for(int k = 1 ; k <= i ; k++)
        {
            cout << k ; 

        }

        // reverse triangle from -1
        for(int l = i-1 ; l >= 1 ; l--)
        {
            cout << l ; 
        }
        cout << endl ; 
    }
}