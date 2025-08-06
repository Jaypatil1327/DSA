#include<iostream>
#include<algorithm>
using namespace std ; 

int main()
{
    string s; 
    getline(cin , s ) ; 

    string str ; 

    for(int i = 0 ; i<=s.length()-1 ; i++)
    {   
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)){
            str += tolower(s[i]);
        }
    }

    cout << str ; 
    
    // int i = 0 ; 
    // int j = str.length()-1 ; 

    // while(i<=j)
    // {
    //     if(str[i]==str[j])
    //     {
    //         i++ ; 
    //         j-- ; 
    //     } else{
    //         return 0 ; 
    //     }
    // }

    return 0 ; 
  
}