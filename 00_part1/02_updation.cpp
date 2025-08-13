#include<iostream>
#include<string>
#include<cctype>
#include<algorithm> 


using namespace std ; 

int main()
{
    string s; 
    getline(cin , s ) ; 

    string str = "" ; 

    for(int i = 0 ; i<=s.length()-1 ; i++)
    {   
        if(s[i]>=97 && s[i]<=122 || s[i]>=65 && s[i<=90]){
        str += tolower(s[i]);
        }
    }
    cout << str ;  
}