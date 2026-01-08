class Solution {
public:
    vector<vector<int>> dp ; 

    int helper(vector<int>& nums1, vector<int>& nums2, int x, int y) {
      if(nums1.size() == x or nums2.size() == y) return INT_MIN ; 
      
      if(dp[x][y] != -1) return dp[x][y] ; 
      
      long btake = (nums1[x] * nums2[y]) + max(0 , helper(nums1 , nums2 , x+1 , y+1)) ; 
      long xtake = helper(nums1 , nums2 , x+1 , y) ; 
      long ytake = helper(nums1 , nums2 , x , y+1) ; 

      return dp[x][y] = max(btake, max(xtake , ytake)) ; 
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        dp.assign(nums1.size() , vector<int> (nums2.size() , -1)) ; 
        return helper(nums1 , nums2 , 0 , 0) ; 
    }
};