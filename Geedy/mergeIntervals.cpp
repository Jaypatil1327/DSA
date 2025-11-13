#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin() , in.end()) ; 

        vector<vector<int> > ans ; 
        int st = in[0][0] ; 
        int ed = in[0][1] ; 

        for(int i = 1 ; i < in.size() ; i++) {
            if(ed >= in[i][0]) { 
                ed = max(ed ,  in[i][1]) ;  
            }
            else {
                ans.push_back({st , ed}) ; 
                st = in[i][0] ; 
                ed = in[i][1] ; 
            }
        }
        ans.push_back({st , ed}) ; 
        return ans; 
    }
};
int main() {

    return 0;
}