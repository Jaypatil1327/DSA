// You are given a 0-indexed string pattern of length n consisting of the characters 'I' meaning increasing and 'D' meaning decreasing.

// A 0-indexed string num of length n + 1 is created using the following conditions:

// num consists of the digits '1' to '9', where each digit is used at most once.
// If pattern[i] == 'I', then num[i] < num[i + 1].
// If pattern[i] == 'D', then num[i] > num[i + 1].
// Return the lexicographically smallest possible string num that meets the conditions.


#include<iostream>
#include<vector>

using namespace std ; 

vector<vector<char>> grid ; 
vector<vector<string>> ans ; 

class Solution {
    public:
        bool f(int idx, string& ans, string& str, vector<bool>& flag) {
            if (ans.length() == str.length() + 1)
                return true;
                
            int left;
            int right;
    
            if (idx == 0) {
                left = 1;
                right = 9;
            } else if (str[idx - 1] == 'I') {
                left = (ans.back()- '0') + 1 ; 
                right = 9 ;
            } else {
                left = 1;
                right = (ans.back() - '0') - 1;
            }
    
            for (int i = left; i <= right; i++) {
                if (flag[i])
                    continue;
                else {
                    flag[i] = true;
                    ans.push_back(i + '0');
                    bool check = f(idx + 1, ans, str, flag);
                    if (check) return true;
                    ans.pop_back();
                    flag[i] = false;
                }
            }
            return false;
        }
        string smallestNumber(string pattern) {
            string ans = "";
            vector<bool> flag(10, false);
            flag[0] = true;
            f(0, ans, pattern, flag);
            return ans;
        }
    };



    int main() {
        
    }