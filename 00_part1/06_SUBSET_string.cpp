#include<iostream>
#include<string>

using namespace std ; 
int count = 1 ; 
void subset(string sub , string og)
{   
    if(og.length()==0)
    {   
        cout << sub << " " ; 
        return ; 
    }
    subset(sub+og[0] , og.substr(1)) ; 
    subset(sub , og.substr(1)) ;
     
}

int main()
{
    string str ; 
    cout << "Enter the string : " ; 
    cin >> str ; 

    subset("" , str) ;   
}