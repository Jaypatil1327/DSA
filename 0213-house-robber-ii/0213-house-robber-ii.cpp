class Solution {
public:
    vector<int> dp;
    int f(vector<int>& arr, int i, int n) {
        if (i >= n) {
            return 0;
        }
        if (dp[i] != -1)
            return dp[i];
        int take = arr[i] + f(arr, i + 2, n);
        int noTake = f(arr, i + 1, n);

        return dp[i] = max(take, noTake);
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0] ; 
        dp.clear();
        dp.resize(101, -1);
        int x = f(nums, 0, nums.size() - 1);
        dp.clear();
        dp.resize(101, -1);
        int y = f(nums, 1, nums.size());
        return max(x, y);
    }
};