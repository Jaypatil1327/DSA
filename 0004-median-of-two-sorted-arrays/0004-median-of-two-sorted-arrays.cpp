class Solution {
public:
    vector<int> merge(vector<int> n , vector<int> m)
        {
            int i = 0 , j = 0 ; 

            vector<int> ans ; 

            while(i < n.size() && j < m.size())
            {
                if(n[i] > m[j]){ 

                    ans.push_back(m[j]) ; 
                    j++  ; 
                } 
                else{ 
                    ans.push_back(n[i]) ; 
                    i++ ; 
                }; 
            }

            while(i==n.size() && j < m.size())
            {
                ans.push_back(m[j]) ; j++ ; 
            }

            while(j==m.size() && i < n.size())
            {
                ans.push_back(n[i]) ; i++ ; 
            }

            return ans ; 
        }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

            vector<int> ans = merge(nums1 , nums2) ; 

            if(ans.size()%2 == 0)
            {
                int mid = ans.size()/2 ; 
                return float(ans[mid]+ans[mid-1])/2; 
            }
            else return ans[ans.size()/2] ;; 
        }
};