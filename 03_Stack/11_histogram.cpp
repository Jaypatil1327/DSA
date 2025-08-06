#include<iostream>
#include<vector> 
#include<stack>
using namespace std  ;


// Brute Force : 
class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        vector<int>ans(arr.size()) ; 
        int mx = 0 ; 
          for(int i = 0 ; i < arr.size() ; i++){
        int k = 0 ; 

        for(int j = i ; j < arr.size() ; j++){
            if(arr[j] >= arr[i] ) k++ ; 
            else {
                break; 
            }
        }
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] >= arr[i]) 
                k++;
            else 
                break;
        }
         mx = max(mx,(k * arr[i])) ; 
    }
    return mx ; 
        
    }

    class Solution2 {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s ; 
        s.push(0) ; 
        int prev[heights.size()] ; 
        prev[0] = -1 ; 

        for(int i = 1 ; i < heights.size() ; i++){
            while(!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop() ; 
            }
            if(s.empty()) prev[i] = -1 ; 
            else{
                prev[i] = s.top() ; 
            }

            s.push(i) ; 
        }

    while(!s.empty())s.pop();

        s.push(heights.size()-1) ; 
        int next[heights.size()] ; 
        next[heights.size()-1] = heights.size() ; 

        for(int i =  heights.size()-2 ; i >= 0 ; i--){
            while(!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop() ; 
            }
            if(s.empty()) next[i] = heights.size() ; 
            else{
                next[i] = s.top() ; 
            }
            s.push(i) ; 
        }

        int mx = 0 ; 

        for(int i = 0 ; i < heights.size() ; i++){
            mx = max(mx , (heights[i] * (next[i]-prev[i]-1))) ; 
        }
        return mx ; 
    }
};
};