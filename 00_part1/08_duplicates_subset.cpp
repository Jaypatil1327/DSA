#include<iostream>
#include<vector> 
#include<string>
#include<algorithm>

using namespace std ; 
 
void subset(string sub , string og , vector<string> &str , bool flag )
{   
    if(og.size()==0) // base case 
    {
        str.push_back(sub) ; 
        return ;  
    }

    char ch =  og[0]  ; 
    if(og.size()==1) // if their is nothing to compare 
    {
        if(flag==true) subset(sub+ch , og.substr(1) , str , true) ; // append o
        subset(sub , og.substr(1) , str , true) ;  // only reduce 
        return;
    }
    if(ch==og[1]) // if they i'th idx and i'th+1 are same 
    {
        if(flag==true) subset(sub+ch , og.substr(1) , str , true) ;  //append  
        subset(sub , og.substr(1) , str , false) ; // false for same 
    } else {  // as normal for other casese
        if(flag==true) subset(sub+ch , og.substr(1) , str , true) ;
        subset(sub , og.substr(1) , str , true) ;
    }
} 

int main()
{
    string str ; 
    string strr = "" ; 
    vector<string> ans ; 

    cout << "Enter the string \n "; 
    cin >> str ; 
    sort(str.begin(),str.end()) ; 

    subset(strr , str , ans , true) ; 
    for(int i = 0 ; i< ans.size() ; i++ )
    {
        cout << i+1 << "." << ans[i] << " " << endl  ; 
    } 
}