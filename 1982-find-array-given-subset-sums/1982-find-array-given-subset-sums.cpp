class Solution {
public:
    void dfs(vector<int> nums, vector<int>& result) {
        if (nums.size() == 2) {
            result.push_back(nums[0] == 0 ? nums[1] : nums[0]);
            return;
        }

        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        int diff = abs(nums[1] - nums[0]);
        vector<int> inc;
        vector<int> exc;

        for (int i = 0; i < nums.size(); i++) {
            if (mp[nums[i]] > 0) {
                int x = nums[i] + diff;
                inc.push_back(x);
                exc.push_back(nums[i]);
                mp[nums[i]]--;
                mp[x]--;
            }
        }

        bool zero = false;
        for (auto x : inc) {
            if (x == 0) {
                zero = true;
            }
        }

        if (zero) {
            result.push_back(-1 * diff);
            dfs(inc, result);
        } else {
            result.push_back(diff);
            dfs(exc, result);
        }
        return;
    }
    vector<int> recoverArray(int n, vector<int>& sums) {
        vector<int> result;
        sort(sums.begin(), sums.end());
        dfs(sums, result);
        return result;
    }
};