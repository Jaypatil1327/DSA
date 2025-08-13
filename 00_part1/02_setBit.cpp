#include<bits/stdc++.h>
using namespace std ;

int main()
{
    // their is bultin fun for set bits counting 
    int nums ; 
    cin >> nums ; 
    cout << __builtin_popcount(nums); 

    // alg0 

    int count = 0 ; 
    while(nums > 0 )
    {
        nums = nums & nums-1 ; 
        count++ ; 
    }

    cout << " " << count ;  
}