#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cout << "Enter \n" ; 
    cin >> n ; 

    for(int i = 1 ; i <= n ; i++)
    {   
        int ch = 97 ; 

        for(int j = 1 ; j <= n ; j++)
        {
            cout << (char)ch ; 
            ch++ ; 
        }

        cout << endl ; 
    } 
}