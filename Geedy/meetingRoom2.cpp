#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<vector<int>> v = {{1,10} , {2,7}, {3,19} , {8,12} , {10,20} , {11,30}} ; 
    vector<int> dx , dy ; 
    for(vector<int>& ele : v) {
        dx.push_back(ele[0]); 
        dy.push_back(ele[1]); 
    }
    sort(dx.begin() , dx.end()); 
    sort(dy.begin() , dy.end()); 

    int meeting = 0 ; 
    int rooms = 0 ; 
    int i = 0 ; 
    int j = 0 ; 

    while(i < dx.size() and j < dy.size()) {
        if(dx[i] < dy[j]) {
            ++meeting ; 
            i++ ; 
        } else {    
            j++ ; 
            --meeting ; 
        } 
        rooms = max(rooms , meeting) ; 
    }
    cout << rooms ; 
    return 0;
}