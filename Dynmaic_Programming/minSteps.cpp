#include<iostream>
#include<climits>
#include<algorithm> 
#include<vector>


using namespace std ;

#define inf INT_MAX 

vector<int> dp(10000 , -1) ; 

// bottom up 
int helper(int n){

    if(n==2 || n==3) return 1 ;
    if(n == 1) return 0 ;  
    if(dp[n] == -1) {
        int x = helper(n-1) ; 
        int y = n % 2 == 0 ? helper(n/2) : inf ; 
        int z = n % 3 == 0 ? helper(n/3) : inf ; 

        dp[n] = 1 + min({x,y,z}) ; 
    }
    return dp[n] ; 
}

//top down 
int helper2(int n){
    dp.clear() ; 
    dp.resize(n+1) ; 

    for(int i = 0 ; i < dp.size() ; i++){
        if(i == 0 || i == 1) dp[i] = 0 ; 
        else if(i == 2 || i == 3) dp[i] = 1 ; 

        else {
            int x = dp[i-1] ; 
            int y = i % 2 == 0 ? dp[n/2] : inf ; 
            int z = i % 3 == 0 ? dp[n/3] : inf ;
            dp[i] = 1 + min({x,y,z}) ; 
        }
    }
    return dp[n] ; 
}
int main(){
    int n ; 
    cin >> n ;

    cout << helper2(n) ;  
}