class Solution {
public:
    bool capacity(int cap , vector<int>& weights, int days) {
        int D = 1 ; 
        int sum = 0 ; 
        for(int i = 0 ; i < weights.size() ; i++) {
            sum += weights[i] ; 
            if(sum > cap) {
                D++ ; 
                if( weights[i] > cap) return false ; 
                sum = weights[i] ; 
            }
        }
        return D <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = INT_MAX; 
        int hi = 0 ; 

        for(auto i : weights) {
           hi += i ; 
           low = min(low , i) ; 
        }
        
        int ans = 0 ; 
        while(low <= hi) {
            int mid = (low + hi) / 2 ; 
            if(capacity(mid , weights , days)) {
                ans = mid ; 
                hi = mid - 1 ;
            } else {
                low = mid + 1 ; 
            }
        }
        return ans ; 
    }
};