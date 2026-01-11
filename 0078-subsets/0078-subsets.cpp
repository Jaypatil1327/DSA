class Solution {
public:
    void helper(vector<vector<int>>& ans, vector<int>& v, int index,
                vector<int>& nums) {
        if (index == nums.size()) {
            ans.push_back(v);
            return;
        }

        v.push_back(nums[index]);
        helper(ans, v, index + 1, nums);
        v.pop_back();
        helper(ans, v, index + 1, nums);

        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans ; 
        vector<int> v;
        helper(ans , v , 0 , nums) ; 
        return ans ; 
    }
};