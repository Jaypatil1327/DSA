#include<iostream>
#include<string>

using namespace std ; 

void remove_char1(string ans, string original)
{
    if(original.length()==0) // base condition when original length become '0'
    {
        cout << ans << endl ; 
        return ; 
    }

    char ch = original[0] ; 
    if(ch=='a') remove_char1(ans , original.substr(1)); // substring from the 1 idx 
    else remove_char1(ans+=ch , original.substr(1)); // and add the ch to ans string 
}

void remove_char2(string ans, string &original , int idx )
{
    if(idx == original.length())
    {
        original =  ans ; 
        return ; 
    }

    if(original[idx]=='h') remove_char2(ans , original , idx+1) ;
    else remove_char2(ans+original[idx] , original , idx+1) ;
}

int main()
{
    string n ; 
    getline(cin , n) ;

    // string s2 = "" ; 

    // for(int i = 0 ; i<=n.length()-1 ; i++)
    // {
    //     if(n[i]=='a') continue;
    //     else s2+=n[i] ; 
    // } 

    // cout << s2 ; 
    // remove_char1("", n ) ;

    remove_char2("" , n , 0) ; 
    cout << n ; 

}