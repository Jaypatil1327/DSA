#include<bits/stdc++.h>/
using namespace std ; 


class Solution {
public:
    int maximum69Number (int num) {
        string str = to_string(num) ; 
        int i = 0 ; 
        while(i < str.length()) {
            if(str[i] == '6') {
                str[i] = '9' ;
                return stoi(str) ; 
            }
            i++ ; 
        }
        return stoi(str) ;
    }
}; 