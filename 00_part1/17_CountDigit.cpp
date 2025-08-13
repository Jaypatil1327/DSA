#include<iostream>
using namespace std ;

int main()
{
    int n ; 
    long count=0 ; 
cout << "Enter " ; 
cin >> n ; 
int a = n ; //for copying the value of n ;  
   while(n>0){ 
    n=n/10 ; // itrate upto n becomes zero 
    count++ ; 
     }
if(a==0) cout << 1 ; // if the n is zero from already it will print 1
cout << count ; 

}