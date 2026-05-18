class Solution {
public:
    vector<int> dp ; 
    int solve(vector<int>& v , int idx) {
        if(idx == v.size()-1) return 0 ; 
        if(dp[idx] != -1) return dp[idx] ; 
        int len = v[idx] + idx ; 
        int ans = INT_MAX ; 
        for(int i = idx + 1 ; i <= len ; i++) {
            if(i < v.size()) {
               ans = min(ans , solve(v , i)) ; 
            } else break ; 
        }
        return dp[idx] = ans == INT_MAX ? INT_MAX : ans + 1 ; 
    }
    int jump(vector<int>& nums) {
        dp.clear() ; 
        dp.resize(nums.size() + 1 , -1) ; 
        return solve(nums, 0) ; 
    }
};