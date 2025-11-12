#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < answers.size(); i++) {
            if (answers[i] == 0)
                ans++;
            else if (mp[answers[i] + 1]) {
                mp[answers[i] + 1]++;
                if (mp[answers[i] + 1] == answers[i] + 1) {
                    mp.erase(answers[i] + 1);
                }
            } else {
                ans += answers[i] + 1;
                mp[answers[i] + 1]++;
            }
        }
        return ans;
    }
};

int main() {

    return 0;
}