#include<iostream>
#include<vector>

using namespace std ;

vector<int> dx {-1 , 0 , +1 , 0} ;
vector<int> dy {0 , +1 , 0 , -1} ; 
vector<char> mv {'u' , 'r' , 'd' , 'l'} ; 

bool isSafe(int i , int j , vector<vector<int>>& v) {
    return i >= 0 and j >= 0 and i < v.size() and j < v[i].size() and v[i][j] == 1; 
}

void solve(vector<vector<int>>& maze , int i , int j , string dir) {
    if(maze.size()-1 == i and maze[i].size()-1 == j) {
        cout << dir << " "; 
        maze[i][j] = -1 ; 
        return ; 
    }

    if(maze.size() < i and maze[i].size() < j) return ; 
 
    for(int k = 0 ; k < 4 ; k++) {
        if(isSafe(i + dx[k] , j + dy[k] , maze)) {
            dir+=mv[k] ; 
            maze[i][j] = 0 ; 
            solve( maze , i + dx[k] , j + dy[k] ,dir) ; 
            dir.pop_back() ; 
            maze[i][j] = 1 ; 
        }
    }
}

int main() {
    vector<vector<int>> maze  = {
        {0,1,0} , 
        {0,0,1} , 
        {1,0,0}
    } ;
    solve(maze , 0 , 0 , "") ;  
}