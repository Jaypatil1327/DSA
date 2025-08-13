#include<iostream>
using namespace std;
int main()
{

    long long fact = 1 ;
    int i = 0 ;  
    long long mod = 1000000000 + 7 ; 

    int n ; 
    cin >> n; 
    while(i <=n)
    {   
        cout << i << "! = " <<  fact << "\n"; 
        if(i==0){i++ ; continue; }
        i++ ;
        fact = (fact % mod * i % mod) % mod ; 
    }
 return 0;
}