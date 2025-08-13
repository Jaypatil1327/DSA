#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cout << "Enter :" ;  // n =12 
    cin >> n ; 
    int sum = 0  ; 
    int a = n ; 
    while(n>0){
       int a = n%10 ; // 12%10=2 ; 
        n/=10 ;    // 12/10 = 1 ; 
        sum+=a ;        // sum = sum + a ; 2+0 = 2 ; 
    }
    if(a==0) cout << 1 ; 
    cout << sum ; 

 return 0;
}