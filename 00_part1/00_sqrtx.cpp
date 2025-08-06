#include<iostream>

using namespace std ; 

int main()
{
    int x ; 
    cin >> x ;

    bool flag = false ;
    int mid = 1 ;  
    while(x!=0)
    {
        if(x%2==0 && flag==false)
        {
            x = x/2 ; 
            int mid = x%2 ; 
            flag = true ; 

        }
        else if(x%2!=0 && flag == false)
        {
            x = x/3 ; 
            int mid = x%3 ; 
            flag = true ; 
        }
        else{
            flag == false ; 
        }
    }
    cout << mid ; 
}