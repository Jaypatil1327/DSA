#include<iostream>

using namespace std ; 

void set_bit(int n)
{   int x = n ;          // copy intial bit 
    n = n | n >> 1 ;    // creating bit mask 
    n = n | n >> 2 ; 
    n = n | n >> 4 ; 
    n = n | n >> 8 ; 

    int ans = n  ^ x ;  //XOR with intial bit 
    cout << ans ; 
}

void set_bit2(int n)
{   
    int ogn = n ; 
    int mask ; 

    while(n > 0)
    {
        mask = n ; 
        n = n & n-1 ; 
    }

    mask = mask << 1 ; 
    int x = mask-1 ^ ogn ; 
    cout << x ; 

}

int main()
{
    int n ; 
    cin >> n ; 
    set_bit2(n) ; 
}