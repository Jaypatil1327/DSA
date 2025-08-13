#include<iostream>
using namespace std ; 

int ispal(string str , int start , int end)
{
    if(start >= end) return true ; 

    return (str[start]==str[end] && ispal(str , start+1 , end-1)) ; 
}

int main()
{   
    string str = "nitin" ; 
    cout << ispal(str,0,str.length()-1 ); 
}