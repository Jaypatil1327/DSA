#include<iostream>
using namespace std ; 

int main()
{
    int n ; 
    cout << "Enter the line num : " ; 
    cin >> n ; 

    //for printing star in a single row 
    for(int i = 1 ; i <= 2*n-1 ; i++ ) cout << i ; 
    
    cout << endl ; 

    int m  = n-1 ; 
    int nsp = 1 ; 

    for(int i = 1 ; i <= m ; i++)
    {
        // for star
        int numb = 1 ; 
        for(int j = 1 ; j<= m-i+1 ; j++)
        {
            cout << numb ; 
            numb++;    
        }
        

        //for space ; 
        for(int k = 1 ; k <= nsp ; k++)
        {
            cout << " " ; 
            numb++ ; 
        }

        // for star
        for(int j = 1 ; j<= m-i+1 ; j++)
        {
            cout << numb ;
            numb++ ;  
        }

        nsp+=2 ;  
        cout << endl ; 
        
    }

}    
