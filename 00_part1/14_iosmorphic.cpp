#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std ; 

bool iso(string s , string t )
{   
    if(s.length() != t.length()) return false ; 

    vector<int>v(150,1000);

    for(int i = 0 ; i<=s.length()-1 ; i++)
    {   
        int idx = (int)s[i] ; 
        // for untouched 
        if(v[idx]==1000)
        {
            v[idx] = s[i]-t[i] ; 
        }
        else if (v[idx] != s[i]-t[i]) return false ;
    }

    // empty vector 
    for(int i = 0 ; i<= 150-1 ; i++)
    {
        v[i]=1000;
    }

    for(int i = 0 ; i<=t.length()-1 ; i++)
    {   
        int idx = (int)t[i] ; 
        // for untouched 
        if(v[idx]==1000)
        {
            v[idx] = t[i]-s[i] ; 
        }
        else if (v[idx] != t[i]-s[i]) return false ;
    }

    return true ; 
}

int main()
{
    cout << "enter two string to compare : " ; 
    string a,b ; 
    getline(cin,a) ; 
    getline(cin,b); 

    cout << iso(a,b) ; 
}