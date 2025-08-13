#include<iostream>
using namespace std;
int main()
{   
    int n ; 
    cout << "Enter \n" ; 
    cin >> n ;  
     

    for(int i = 1 ; i <=n; i++)
    {
        char count = 'A' ; 

        for(int j = 1 ; j<=n ; j++)
        {   
            cout << count++ << " "; 
        }
        cout << endl ; 
    }
}
