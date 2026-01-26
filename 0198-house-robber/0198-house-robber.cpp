class Solution {
public:
    int rob(vector<int>& nums) {
        int prev = 0  ;
        for(int i = nums.size()-2 ; i >= 0 ; i--) {
            int x = nums[i] + prev ; 
            prev = nums[i+1] ;
            nums[i] = max(x , prev) ; 
        }
        return nums[0] ; 
    }
};