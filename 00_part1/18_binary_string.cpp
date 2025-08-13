#include<iostream>
#include<string>

using namespace std ;

void binary_string(int n , string str )
{   
    if(str.length()==n)
    {
        cout << str << endl ;
        return ; 
    }
    binary_string(n , str+'0');

    if("" == str || str[str.length()-1]!='1') 
    {
        binary_string(n , str+'1');
    }
    
}
int main()
{
    string str = "";
    int n ; 
    cout << "Enter the n " ; 
    cin >> n ;

    binary_string(n , str ) ; 

}