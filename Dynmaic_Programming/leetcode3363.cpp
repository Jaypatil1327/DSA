#include<bits/stdc++.h>
using namespace std ; 

int n = 0 ; 

// DP memoization using 2D dp ; 

vector<vector<int>> dp2 ; 
vector<vector<int>> dp3 ; 


int getChild1(vector<vector<int>> &grid) {
    int sum = 0 ; 

    for(int i = 0 ; i < n ; i++) {
        sum += grid[i][i] ; 
        grid[i][i] = 0 ; 
    }
    return sum ; 
}

int getChild2(int i , int j , vector<vector<int>>& grid) {
    if(i > j or i < 0 or j < 0 or j >= n or i >= n) return 0 ; 
    if(i == n-1 and j == n-1) return 0 ; 

    if(dp2[i][j] != -1) {
        return dp2[i][j] ; 
    }
    int maxFruit = 0 ; 
    int x = getChild2(i + 1 , j-1 , grid) ; 
    int y = getChild2(i+1 , j , grid ); 
    int z = getChild2(i+1 , j+1 , grid) ; 

    return  dp2[i][j] = max(x,max(y,z)) + grid[i][j] ; 
} 
int getChild3(int i , int j , vector<vector<int>>& grid){
    if(i < j or i < 0 or j < 0 or j >= n or i >= n) return 0 ; 
    if(i == n-1 and j == n-1) return 0 ; 

    if(dp3[i][j] != -1) {
        return dp3[i][j] ; 
    }

    int maxFruit = 0 ; 
    int x = getChild3(i , j+1 , grid) ; 
    int y = getChild3(i+1 , j+1 , grid ); 
    int z = getChild3(i-1 , j+1 , grid) ; 

    return dp3[i][j] = max(x,max(y,z)) + grid[i][j] ; 
} 
int main() {
    vector<vector<int>> grid = {{1,2,3,4},{5,6,8,7},{9,10,11,12},{13,14,15,16}} ; 

    n = grid.size() ; 
    dp2.resize(n , vector<int> (n , -1)) ; 
    dp3.resize(n , vector<int> (n , -1)) ; 

    int child1 = getChild1(grid) ; 
    int child2 = getChild2(0 , n-1 , grid) ; 
    int child3 = getChild3(n-1 , 0 , grid) ; 

    cout << child1 + child2 + child3 ; 

    return 1; 
    
}
