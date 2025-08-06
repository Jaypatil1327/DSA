#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
#include<string>

using namespace std ; 

int main()
{
    string str ; 
    cout << "Enter the string \n";
    getline(cin,str) ; 
    stringstream var(str) ; 

    string temp ; 
    vector<string> v ;

    while(var>>temp)
    {
        v.push_back(temp) ; 
    }

    sort(v.begin(),v.end());

    int maxcount = 1 ;
    int count = 1 ;

    for(int i = 1 ; i<=v.size()-1 ; i++)
    {   
        if(v[i]==v[i-1])
        {
            count++ ;  
        } 
        else count = 1 ; 
    
        if(maxcount<count) maxcount = count ; 
    }

    count = 1 ; 
    string freq ; 
    for(int i = 0 ; i<= v.size()-1 ; i++)
    {
        if(v[i]==v[i-1])
        {
            count++ ;  
        } 
        else count = 1 ; 
        if(maxcount==count) freq = v[i] ; 
    }
    cout << maxcount << " " << freq  ;

}
