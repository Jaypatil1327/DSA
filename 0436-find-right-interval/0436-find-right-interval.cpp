class Solution {
public:
    int helper(int index, int val, vector<vector<int>>& mapper) {
        int low = 0;
        int hi = mapper.size() - 1;
        int ans = -1;

        while (low <= hi) {
            int mid = ((hi - low) / 2) + low;
            if (val <= mapper[mid][0]) {
                ans = mapper[mid][1];
                hi = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<vector<int>> mapper;
        vector<int> ans;

        for (int i = 0; i < intervals.size(); i++) {
            mapper.push_back({intervals[i][0], i});
        }

        sort(mapper.begin(), mapper.end());

        for (int i = 0; i < intervals.size(); i++) {
            ans.push_back(helper(i, intervals[i][1], mapper));
        }
        return ans;
    }
};