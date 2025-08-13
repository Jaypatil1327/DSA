#include<iostream>
using namespace std ; 

int main()
{
    int n ; 
    cout << "Enter \n" ; 
    cin >> n ; 
    bool flag = false ; // intialisied flag as false 

    for(int i = 1 ; i <= n ; i++)
    {   int a = 1 ; // extra var as to print 
    // if its even make it start from 0 
    // odd -------> 1 ;

        if(i%2==0) 
        { 
            flag = true ;
            a = 0 ; 
        }

        for(int j = 1 ; j <= i ; j++)
        {  
            cout << a << " ";

            if(a == 0 ) a=1 ; // fliping the nums 
            else a=0 ; 

            flag = false ; // reset the flag  
        }

        cout << endl ; 

    }
}