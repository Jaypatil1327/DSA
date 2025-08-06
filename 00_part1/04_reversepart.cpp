#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main()
{
    string str ; 
    cout << "Enter the string :" ; 
    getline(cin,str); 
 
    if(str.length()%2 != 0 )
    {
        cout << "its not even string /n" ; 
        return 0 ; 
    }
    else
    {    int half = str.size()/2 ; 
        reverse(str.begin(),str.end()-half) ; 
        cout << str ;
    }
 return 0;
}