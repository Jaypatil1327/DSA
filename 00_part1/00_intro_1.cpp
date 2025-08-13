// string is basically array of char 

#include<iostream>
#include<string>
using namespace std ; 

int main()
{
    string str ; 
    // cin >> str ; // to get multiple words its we use getline 
    getline(cin , str) ; 
    cout << str ; 
    char ch ='A' ;
    cout << (char)tolower(ch) ; 
} 