#include<iostream>
#include<string>

using namespace std ;

string count(int n)
{
    if(n==1) return "1" ;
    string str = count(n-1) ; 

    string dtr = "" ; 
    int freq = 1 ; 
    char ch = str[0] ; 

    for(int i = 1 ; i < str.length() ; i++)
    {
        if(str[i]==ch)
        {
            freq++ ;
        }
        else{

            dtr+=(to_string(freq)+ch) ; 
            freq=1;
            ch = str[i] ; 
        }
    }
    dtr+=(to_string(freq)+ch) ; // for remaining part 

    return dtr ; 
}

int main()
{
    int n ;
    cout << "Enter the n :" ;
    cin >> n ; 
    cout << count(n) ; 
}