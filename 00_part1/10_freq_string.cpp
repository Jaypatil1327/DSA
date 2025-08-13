#include<iostream>
using namespace std ; 

int main()
{
    string str ; 
    cin >> str ; 
    int count = 0 ; 

    for(int i = 0 ; i<= str.size()-2 ; i++) 
    {
        for(int j = 1 ; j <= str.size()-1; j++)
        {
            if(str[i]==str[j])
            {
                count++ ; 
            } 
        }
    }
    cout << count ; 

}