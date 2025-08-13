#include<iostream>
using namespace std ; 

int main()
{
    string str ; 
    cin >> str ;

    int arr[26]={} ; 

    for(int i = 0 ; i<=str.length()-1; i++)
    {
        int ch = str[i] ; 
        int ascii  = (int)ch ; 
        arr[ascii-97]++  ; 
    }  

    int max = 0 ; 
    for(int i = 0 ; i<=25 ; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i] ; 
        }
    } 

    for(int i = 0 ; i<= 25 ; i++) 
    {
        if(arr[i]==max)
        {
            char ascii = (char)97+i ; 
            cout << ascii << " " << max ; 
        }
    }   
}    