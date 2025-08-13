#include<iostream>
using namespace std ; 

int bin_to_dec(string str)
{
    int n = str.length() ; 
    int ans = 0 ; 

    for(int i = n-1 ; i >= 0 ; i--)
    {
        int num = int(str[i]) - int('0') ; // converting string to int 

        ans+=(num * (1 << (n-i-1))) ; // ans =  multiply * 2^(length - idex - 1) 
    } 
    return ans ; 
}

int main()
{
    string s ; 
    cin >> s ; 
    cout << bin_to_dec(s) ; 
}