class Solution {
public:
    vector<int> dp ; 
    int f(vector<int>& arr , int i) {
        if(i >= arr.size()) {
            return 0 ; 
        }
        if(dp[i] != -1) return dp[i] ; 
        int take = arr[i] + f(arr , i+2) ; 
        int noTake = f(arr , i+1) ; 

        return dp[i] = max(take , noTake) ; 
    }
    int rob(vector<int>& nums) {
        dp.resize(nums.size() , -1); 
        return f(nums , 0) ; 
    }
};