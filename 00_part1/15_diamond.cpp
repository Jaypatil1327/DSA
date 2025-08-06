#include<iostream>
using namespace std ; 

int main()
{
    int n ; 
    cout << "Enter : ";
    cin >> n ; 
    int nsp = n-1 ; 
    int nst = 1 ; 

    
    for(int i = 1 ; i <=2*n-1 ; i++)
    {
        for(int j = 1 ; j <= nsp ; j++)
        {
            cout << " " ;
        }
        if(n-1 >= i) nsp-- ;  // this checks first first if to avoid flip the situation M1
        else nsp++ ; 

    // method 2 

        // if(i>=n) nsp++ ; 
        // else nsp-- ; 

        for(int k = 1 ; k <= nst  ; k++ )
        {
            cout << "*" ;
        }

        if(i<= n-1) nst+=2; // this checks first first if to avoid flip the situation M1
        else nst-=2 ; 

    // method 2 

        // if(i>=n) nst-=2 ; 
        // else nst+=2 ;  

        cout << endl ; 

    } 

}

 