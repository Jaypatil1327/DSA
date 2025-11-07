#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string repeatLimitedString(string s, int rp) {
        priority_queue<pair<char,int>> pq ; 
        unordered_map<char , int> mp ; 
        for(char ele : s) {
            mp[ele]++ ; 
        } 
        for(auto ele : mp) pq.push({ele.first , ele.second}) ; 
        string str = "" ; 

        while(pq.size() > 0) {
            char ch = pq.top().first ; 
            int n = pq.top().second ; 
            pq.pop() ; 

            int mn = min(n , rp) ; 
            while(mn--) str+=ch ; 

            if(n - rp > 0) {
                if(!pq.empty()) {
                    char ch2 = pq.top().first ; 
                    int n2 = pq.top().second ; 
                    str+=ch2 ; 
                    pq.pop() ; 
                    if(n2-1 > 0)pq.push({ch2 , n2-1}); 
                    pq.push({ch , n-rp}); 
                } else return str ; 
            }
            
        }
        return str ; 
    }
};

int main() {

    return 0;
}