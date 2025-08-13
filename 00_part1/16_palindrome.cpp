#include<iostream>
#include<string>

using namespace std ; 

bool getpal(string &str , int idx , int last_idx)
{   
    if(idx > last_idx) return true ; // base 
    if(str[idx]!=str[last_idx]) return false ; // if current idx == current last 
    getpal(str , idx+1 , last_idx-1) ; 
}

int main()
{
    string str ; 
    cin >> str ; 
    cout << getpal(str , 0 , str.length()-1) ; 
}