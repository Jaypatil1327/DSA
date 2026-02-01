class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int x = nums[0];
        int mx = INT_MAX;
        int smax = INT_MAX;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= mx) {
                smax = mx;
                mx = nums[i];
            } else if (nums[i] <= smax) {
                smax = nums[i];
            }
        }

        return x + mx + smax;
    }
};