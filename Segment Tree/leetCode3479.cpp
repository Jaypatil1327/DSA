#include<bits/stdc++.h> 
using namespace std ; 

vector<int> segment ;

void build(int i , int low , int hi , vector<int>& b) {
    if(low == hi) {
        segment[i] = b[low] ; 
        return ; 
    }
    int n = (low + hi) / 2 ; 

    build(2*i+1 , low , n , b) ; 
    build(2*i+2 , n+1 , hi , b) ; 

    segment[i] = max(segment[2*i+1] , segment[2*i+2]) ;  
} 

void solve(int i , int l , int r , int val , bool &flag) {
    int mid = (l+r)/2 ;  
    if(l == r) {
        segment[i] = -1 ; 
        flag = true ;
        return ;  
    } 
    else if(segment[2*i+1] >= val) {
        solve(2*i+1 , l , mid , val , flag) ; 
    } 
    else if(segment[2*i+2] >= val) {
        solve(2*i+2 , mid+1 , r, val, flag) ;
    }
    segment[i] = max(segment[2*i+1] , segment[2*i+2]) ; 
}

int main() {
    vector<int> fruits = {4,2,5} ; 
    vector<int> baskets = {3,5,4} ;
    
    segment.resize(4 * baskets.size()) ; 

    int n = baskets.size() ; 

    build(0 , 0 , n-1 , baskets) ; 
    
    int cnt = 0 ; 
    for(int i = 0 ; i < fruits.size() ; i++) {
        bool flag = false ; 
        solve(0 , 0 , n-1 , fruits[i] , flag);
        if(!flag) cnt++ ; 
    }
    cout << cnt ; 

}