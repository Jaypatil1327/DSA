#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    vector<int> segment;

    int find(int i, int l, int r, int low, int hi) {
        if (low > hi || r < low || hi < l)
            return 0;
        if (l <= low && hi <= r)
            return segment[i];

        int mid = (low + hi) / 2;
        int left = find(2 * i + 1, l, r, low, mid);
        int right = find(2 * i + 2, l, r, mid + 1, hi);
        return left + right;
    }

    void update(int i, int idx, int low, int hi) {
        if (low == hi) {
            segment[i] += 1;
            return;
        }

        int mid = (low + hi) / 2;
        if (idx <= mid)
            update(2 * i + 1, idx, low, mid);
        else
            update(2 * i + 2, idx, mid + 1, hi);

        segment[i] = segment[2 * i + 1] + segment[2 * i + 2];
    }

    vector<int> countSmaller(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        // Remove duplicates
        sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

        unordered_map<int, int> mp;
        for (int i = 0; i < sorted.size(); i++) {
            mp[sorted[i]] = i;
        }

        segment.resize(4 * sorted.size(), 0);

        vector<int> result(nums.size());
        for (int i = nums.size() - 1; i >= 0; i--) {
            int rank = mp[nums[i]];
            result[i] = find(0, 0, rank - 1, 0, sorted.size() - 1);
            update(0, rank, 0, sorted.size() - 1);
        }

        return result;
    }
};
