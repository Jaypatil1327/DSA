#include<iostream>
#include<vector>
#include<climits>

using namespace std ; 

#define mod 1000000007 

vector<long long> dp(1000006) ; 

// int f(int n){
//     if(n==0) return 1 ;
//     if(dp[n] != -1) return dp[n] ; 
//     int result = 0 ; 

//     for(int i = 1 ; i <= 6 ; i++){
//         if(n - i >= 0) result = (result % mod + f(n-i) % mod) % mod; 
//         else break ; 
//     }

//     return dp[n] = result % mod ; 
// }

int fbu(int n){
    dp[0] = 1 ; 
    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= 6 ; j++){
            if(i - j >= 0) {
                dp[i] = (dp[i] % mod + (dp[i-j] % mod) ) % mod;
            }
            else break; 
        } 
    }
    return dp[n] ; 
}

int main(){
    long long n ; 
    cin >> n ; 
    cout << fbu(n) ; 
    return 0 ;
}