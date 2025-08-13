#include<iostream>
#include<vector>
#include<climits>

using namespace std ; 

int f(vector<int>& arr , int i , int j) {
    
    if(i==j or j == i+1) return 0 ; 
    
    int ans = INT_MAX ; 
    for(int l = i+1 ; l < j ; l++){
        ans = min(ans , f(arr , i , l) + f(arr , l , j) + arr[i] * arr[j] * arr[l]) ; 
    }
    return ans ; 
}

int main() {
    int n ; 
    cin >> n ; 

    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ; 

    cout << f(v , 0 , n-1) ;

    return 0 ;  

}