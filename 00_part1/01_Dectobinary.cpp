#include<iostream>
using namespace std ;

string Dec_to_Bin(int n)
{
    string str = "" ; 

    while(n>0)
    {
        if(n % 2 == 0) str = "0"+ str ;  // if even 0 
        else str = "1" + str ;  // Odd then 1 

        n/=2 ;  // divide it by 2 
    }

    return str; 
}

int main()
{
    int num ; 
    cin >> num ; 

    cout << Dec_to_Bin(num) ; 
    int x = 18 ^ -18 ; 
    cout << endl<<  x ; 
}