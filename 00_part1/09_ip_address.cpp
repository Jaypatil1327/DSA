#include<iostream>
#include<string>
#include<vector>

using namespace std ; 

int main()
{
    string str = "1.1.1" ; 
    // vector<string> v ;
    string v ;

    for(int i = 0 ; i<= str.length()-1 ; i++)
    {
        if(str[i]=='.')
        {
            v+="[.]";
        }
        else v+="1";
    }
    cout << v ; 

}