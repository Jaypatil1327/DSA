#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1)
            return true;

        if(n == INT_MIN or n == 0 or n < 0) return false ; 
        
        double x = log10(n) / log10(4);
        return int(x) == x ;

        return (n > 0 and (n & (n-1)) == 0) and n % 3 == 1 ; 
    }
};


class Solution {
public:
    bool isPowerOfFour(int n) {
        return (n > 0 and (n & (n-1)) == 0) and n % 3 == 1 ; 
    }
};