#include<iostream>
#include<string>
#include<sstream>

using namespace std ; 

int main()
{
    string str = "Jayesh nitin patil " ; 
    stringstream var(str) ; // fill values of str in var ; 

    string temp ; 
    string t2 = ""; 

    while(var>>temp) // take temp as input 
    {
        t2+=temp ; 
    }

    cout << t2 ; 
}