#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    vector<int> dx = {100 , 75  , 50 , 25} ; 
    vector<int> dy = {0 , 25 , 50 , 75} ;
    vector<vector<double>> dp ;  

    double helper(int a , int b) {
        if(a <= 0 or b <= 0) {
            if(a <= 0 and b <= 0) {
                return 0.5 ; 
            }
            else if(a <= 0 and b > 0) { 
                return 1 ;
            } 
            else return 0 ; 
        }
        if(dp[a][b] != -1.0) {
            return dp[a][b] ; 
        } 
        double sum = 0 ; 
        for(int i = 0 ; i <= 3 ; i++) {
            sum += helper(a - dx[i] , b - dy[i]); 
        }
        return  dp[a][b] = sum * 0.25 ; 
    }
    double soupServings(int n) {
        if (n > 4600) return 1.0;
        dp.resize(n + 1 , vector<double> (n+1, -1.0));
        return helper(n,n) ; 
    }
};