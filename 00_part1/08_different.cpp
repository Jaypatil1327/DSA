#include<iostream>
using namespace std;
int main()
{
    string str ; 
    getline(cin,str) ; 

    int count = 0  ; 
    for(int i = 0 ; i<= str.length()-1 ;i++)
    {
        if(str.length()==1) break;
        else if(str[0]!=str[i+1]) count++ ; 
        else if(str[str.length()]!=str[i-1]) count++ ; 
        else if(str[i]!=str[i-1] && str[i]!=str[i+1]) count++ ; 
    }
    cout << count ; 
     
 return 0;
}