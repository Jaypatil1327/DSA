#include<vector>
#include<iostream>

using namespace std ; 

vector<int> dx {-2 , -2 , -1 , +1 , +2 , +2 , +1 , -1} ; 
vector<int> dy {-1 , +1 , +2 , +2 , +1 , -1 , -2 , -2} ; 

void display(vector<vector<int>> v) {
    for(auto outer : v) {
        for(auto inner : outer) {
            cout << inner << "\t" ; 
        } 
        cout << endl ; 
    }
    return;
}

bool isSafe(vector<vector<int>> &grid , int i , int j) {
    return i >= 0 and j >= 0 and i < grid.size() and j < grid.size() and grid[i][j] == -1 ; 
}
void solve(vector<vector<int>> &grid , int i , int j , int count , int n){

    if(n*n == count) {
        grid[i][j] = count ; 
        display(grid) ; 
        grid[i][j] = -1 ; 

        cout << endl << endl ; 
        return ; 
    }

    for(int k = 0 ; k < 8 ; k++) {  // call for all combinations 
        
        if(isSafe(grid , i + dx[k] , j + dy[k])) {
            grid[i][j] = count ; 
            solve(grid , i + dx[k] , j + dy[k] , count+1 , n) ; 
            grid[i][j] = -1 ; 
        }
    }
}
int main() {
    cout << "Enter Grid size : " ; 
    int n ; 
    cin >> n ; 
    vector<vector<int>> grid(n , vector<int>(n , -1)) ; 

    solve(grid , 0 , 0 , 1 , n) ; 
}