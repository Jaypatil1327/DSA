#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        bool solve(int idx, vector<int>& result, vector<bool>& flag, int& n) {
            if (idx >= result.size())
                return true;
    
            if (result[idx] != -1)
                return solve(idx + 1, result, flag, n);
    
            for (int i = n; i >= 1; i--) {
                if (flag[i] == true)
                    continue;
                else {
                    if (i == 1) {
                        result[idx] = i;
                        flag[i] = true;
                        bool check = solve(idx + 1, result, flag, n);
                        if (check)
                            return true;
    
                        result[idx] = -1;
                        flag[i] = false;
                    } else {
                        int j = idx + i;
    
                        if (j < result.size() and result[j] == -1) {
                            result[j] = i;
                            result[idx] = i;
    
                            flag[i] = true;
                            bool check = solve(idx + 1, result, flag, n);
                            if (check)
                                return true;
    
                            result[j] = -1;
                            result[idx] = -1;
    
                            flag[i] = false;
                        }
                    }
                }
            }
            return false;
        }
        vector<int> constructDistancedSequence(int n) {
            vector<bool> ans(n + 1, false);
            vector<int> result((2 * n) - 1, -1);
    
            solve(0, result, ans, n);
            return result;
        }
    };