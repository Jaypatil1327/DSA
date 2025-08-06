#include<iostream>
using namespace std;
int main()
{   
    int n ; 
    int x ; 
    cout << "Enter \n" ; 
    cin >> n ; 
    cin >> x ; 

    for(int i =1 ; i <=n ; i++)
    {   
        for(int j = 1 ; j <= x ; j++)
        {
            cout << "*" ; 
        }
        cout << endl ; 
    }

}