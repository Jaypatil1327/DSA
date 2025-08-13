#include<bits/stdc++.h>
using namespace std ; 


class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false ; 
        return 1162261467 % n == 0 ;   
    }
};

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false ;   
        double x = log10(n)/log10(3) ; 
        return x == int(x) ; 
    }
};

class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n==1) return true ;  
        else if (n <= 0 || n%3!=0) return false ; 
        return isPowerOfThree(n/3) ; 
    }
};

class Solution {
public:
    bool isPowerOfThree(int n) {
        int num = 0;
        for(int i = 0; pow(3,i) <= n; i++){
            num = pow(3,i);
            if(num == n) return true;
        }
        return false;
    }
};