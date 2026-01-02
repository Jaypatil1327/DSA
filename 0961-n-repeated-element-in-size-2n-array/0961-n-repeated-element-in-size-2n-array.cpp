class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp ; 
        int n = (nums.size() / 2 ) + 2 ; 

        for(int i = 0 ; i < n ; i++) {
            mp[nums[i]]++ ; 
            if(mp[nums[i]] > 1) return nums[i] ;  
        }
        return -1 ; 
    }
};