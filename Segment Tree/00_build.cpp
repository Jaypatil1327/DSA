#include<iostream>
#include<climits>
#include<vector>

using namespace std ;


vector<int> segment ;

void build(int i , int low , int hi , vector<int> &arr) {
    if(low == hi) {
        segment[i] = arr[low] ;
        return ; 
    }
    int mid = ( low + hi ) / 2 ; 
    build(2*i + 1 , low , mid , arr) ; 
    build(2*i + 2 , mid+1 , hi , arr) ; 
    segment[i] = max(segment[2*i+1] , segment[2*i+2]) ; 
}

int getMin(int i , int low , int hi , int l , int r) {
    if(low >= l and r >= hi) return segment[i] ; 
    if(hi < l or r < low) return INT_MIN ;
    else {
        int mid = ( low + hi ) / 2 ; 
        int left = getMin(2*i+1 , low , mid , l , r) ; 
        int right = getMin(2*i+2 , mid+1, hi , l , r) ;     
        return max(left , right) ; 
    } 
}

int main() {
    vector<int> v {1,4,2,8,6,4,9,3};
    
    int n = v.size() ; 
    segment.resize(4*n) ; 

    build(0 , 0 , n-1 , v) ; 
    
        cout << "Enter number " ; 
        int x , y ; 
        cin >> x >> y ; 
        cout << getMin(0 , 0 , n-1,  x , y) ; 

}