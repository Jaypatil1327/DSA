#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int j = 0 ; 
        long long cnt = 0 ; 

        while(j < nums.size()) {
            if(nums[j] != 0) {
                j++ ; 
                continue ;
            }
            else {
                int prev = j ; 
                while(j < nums.size() and nums[j] == 0) j++ ; 
                int x = j - prev ; 
                cnt +=  (long long)x*(x+1)/2; 
            }
        }
        return cnt ;
    }
};