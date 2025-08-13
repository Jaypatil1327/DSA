#include<iostream>
#include<vector>

using namespace std ; 

vector<vector<char>> grid ; 
vector<vector<string>> ans ; 


bool isSafe(int x , int y ) {
    // check horizontally 
    for(int i = x-1 ; i >= 0 ; i--) if(grid[i][y] == 'Q') return false ; 
    for(int i = x - 1 , j = y - 1 ; i >= 0 and j >= 0 ; i-- , j--) if(grid[i][j] == 'Q') return false ; 
    for(int i = x - 1 , j = y + 1 ; i >= 0 and j < grid.size() ; i-- , j++) if(grid[i][j] == 'Q') return false ; 

    return true ; 
}
void solve(int row) {
    if(row == grid.size()) {
        vector<string> v ; 
        for(int i = 0 ; i < grid.size() ; i++) {
            string str = "" ; 
            for(int j = 0 ; j < grid.size() ; j++){
                str+=grid[i][j] ; 
            }
            v.push_back(str) ; 
        }
        ans.push_back(v) ; 
    } 

    for(int i = 0 ; i < grid.size() ; i++) {
        if(isSafe(row , i)) {
            grid[row][i] = 'Q' ; 
            solve(row+1) ; 
            grid[row][i] ='.' ; 
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    grid.resize(n , vector<char> (n,'.')) ; 
    solve(0) ; 
    return ans ; 
}
int main() {
    vector<vector<string>> v = solveNQueens(4) ; 

    for(auto ot : v) {
        for(auto in : ot) {
            cout << in << " " ; 
        }
        cout << endl ; 
    }
}