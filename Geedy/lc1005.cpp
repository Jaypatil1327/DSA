#include<iostream>
#include<queue> 
#include<vector>

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int , vector<int> , greater<int>> pq ; 
        int sum = 0 ; 
        for(int ele : nums) {
            pq.push(ele) ; 
            sum += ele ; 
        }
        while(k-- != 0) {
            int top = pq.top() ; 
            if(top == 0) break ; 
            pq.pop() ; 
            int flipped = -top ; 
            sum = sum - top + flipped ; 
            pq.push(flipped) ;  
        }
        return sum ;
    }
};