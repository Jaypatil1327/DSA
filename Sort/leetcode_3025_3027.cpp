#include<bits/stdc++.h>
using namespace std ; 


// method 1 : 

class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int count = 0 ; 
        for(int i = 0 ; i < points.size() ; i++) {
            int x1 = points[i][0] ; 
            int y1 = points[i][1] ; 

            for(int j = 0 ; j < points.size() ; j++) {
                if(i == j) continue ; 
                int x2 = points[j][0] ; 
                int y2 = points[j][1] ; 

                if(x2 <= x1 and y2 >= y1 ) {
                    bool flag = true ; 
                    for(int k = 0 ; k < points.size() ; k++) {
                        if(k == i or k == j) continue ;
                        int x3 = points[k][0] ; 
                        int y3 = points[k][1] ; 

                        if(x3 <= x1 and x3 >= x2 and y3 >= y1 and y3 <= y2) flag = false ; 
                    }
                    if(flag) count++ ; 
                }
                
            }
        }
        return count ; 
    }
};

//method 2 : 

bool comp(vector<int>& a , vector<int>& b) {
    if(a[0] == b[0] and a[1] < b[1]) return false ; 
    else if(a[0] > b[0]) return false  ; 
    return true  ; 
}

class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        sort(points.begin() , points.end() , comp) ; 
        
        int count = 0 ; 

        for(int i = 0 ; i < points.size() ; i++) {
            int x1 = points[i][0] ; 
            int y1 = points[i][1] ; 

            int mx = INT_MIN ; 

            for(int j = i+1 ; j < points.size() ; j++) {
                int x2 = points[j][0] ; 
                int y2 = points[j][1] ; 

                if(y2 > y1) continue ; 
                else if(y2 > mx) {
                    mx = y2 ;
                    count++ ; 
                }
            }
        }
        return count ; 
    }
};