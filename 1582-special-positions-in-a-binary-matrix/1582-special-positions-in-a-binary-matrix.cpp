class Solution {
public:

    int numSpecial(vector<vector<int>>& mat) {
        int count = 0 ; 
        for(int i = 0 ; i < mat.size() ; i++) {
            for(int j = 0 ; j < mat[i].size() ; j++) {
                if(mat[i][j] == 1){
                bool flag = false ; 
                for(int k = 0 ; k < mat.size() ; k++){
                    if(i == k) continue ; 
                    if(mat[k][j] == 1) {
                        flag = true ; 
                        break ; 
                    }
                }
                if(flag) break ; 
                for(int k = 0 ; k < mat[i].size() ; k++){
                    if(k == j) continue ; 
                    if(mat[i][k] == 1) {
                        flag = true ; 
                        break ; 
                    }
                }
                if(flag) break ; 
                else {
                    cout << mat[i][j] ; 
                    count++ ; 
                }
             }
            }
        }
        return count ; 
    }
};