#include<bits/stdc++.h>
using namespace std ; 


#define pr pair<double , pair<int,int>> 
int mod = -1e5 ; 

// TC -> n + k*log(n) + n => klogn ; 
//  SC -> n ; 
class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int k) {
        priority_queue<pr> pq ; 

        for(auto ele : classes) {
            double gain = (double(ele[0] + 1) / (ele[1] + 1)) - ((double)ele[0]/ele[1]) ; 
            pq.push({gain , {ele[0] , ele[1]}}) ;
        }

        while(k--) {
            pr temp = pq.top() ; 
            pq.pop() ; 

            int x = temp.second.first + 1; 
            int y = temp.second.second + 1 ; 

            double gain = (double(x + 1)/(y+1)) - double(x)/y ; 
            pq.push({gain , {x ,y}}) ; 
        }

        double ans = 0 ; 

        while(!pq.empty()) {
            ans += (double)pq.top().second.first /  pq.top().second.second ;
            pq.pop() ;   
        }
        return ans / classes.size() ; 
    }
};