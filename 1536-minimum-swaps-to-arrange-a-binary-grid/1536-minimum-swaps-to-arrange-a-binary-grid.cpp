class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        vector<int> pos ; 
        int n = grid.size() ;  

        for(int i = 0 ; i < grid.size() ; i++) {
            int count = 0 ; 
            for(int j = grid.size()-1 ; j >= 0 ; j--) {
                if(grid[i][j] == 0) count++ ; 
                else break ; 
            } 
            pos.push_back(count) ;
        } 

        int oper = 0 ; 
        for(int i = 0 ; i < pos.size() ; i++) {
            int req = n - i - 1 ; 
            int j = i ; 

            while(j < pos.size() and req > pos[j]) {
                j++ ; 
            } 
            if(j == n) {
                return -1 ; 
            }
            while(j > i) {
                swap(pos[j] , pos[j-1]) ; 
                oper++ ; 
                j-- ; 
            } 
        }
        return oper ; 
    }
};