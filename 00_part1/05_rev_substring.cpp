#include<iostream>
#include<string>
#include<algorithm>
using namespace std ; 

int main()
{
    string str ; 
    getline(cin,str ) ; 
    if(str.length()<5)
    {
        cout << "invalid" ; 
        return 0 ; 
    }
    else{
        reverse(str.begin()+2 ,str.begin()+5);; 
        cout << str ; 
    }
}