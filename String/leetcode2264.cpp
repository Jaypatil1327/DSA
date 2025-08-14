#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "" ; 

        for(int i = 0 ; i <= num.length()-3 ; i++) {
            if(num[i] == num[i+1] and num[i] == num[i+2]) {
                int val = num[i] - 48 ; 
                if(ans == "") ans = num.substr(i , 3) ;
                else {
                    if(ans[0] < num[i]) {
                        ans = num.substr(i , 3);
                    }
                }
            }
        } 

        return ans ; 
    }
};