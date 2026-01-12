class Solution {
public:
    void dfs(vector<int>& sums, vector<int>& result) {
        // Base case: only one element left
        if (sums.size() == 1)
            return;

        // Subset sums of one element -> [0, x]
        if (sums.size() == 2) {
            if (sums[0] == 0)
                result.push_back(sums[1]);
            else
                result.push_back(sums[0]);
            return;
        }

        // Smallest difference gives |x|
        int diff = sums[1] - sums[0];

        unordered_map<int, int> mp;
        for (int x : sums)
            mp[x]++;

        vector<int> exc; // without x
        vector<int> inc; // with x

        // Pairing logic
        for (int x : sums) {
            if (mp[x] == 0)
                continue;

            int y = x + diff;
            mp[x]--;
            mp[y]--;

            exc.push_back(x);
            inc.push_back(y);
        }

        // Decide sign using position of 0
        bool zeroInExc = false;
        for (int x : exc) {
            if (x == 0) {
                zeroInExc = true;
                break;
            }
        }

        if (zeroInExc) {
            // diff is positive
            result.push_back(diff);
            dfs(exc, result);
        } else {
            // diff is negative
            result.push_back(-diff);
            dfs(inc, result);
        }
    }

    vector<int> recoverArray(int n, vector<int>& sums) {
        sort(sums.begin(), sums.end());
        vector<int> result;
        dfs(sums, result);
        return result;
    }
};
