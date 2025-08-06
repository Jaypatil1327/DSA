#include<iostream>
#include<vector>
#include<climits>

using namespace std ;

// vector<int> dp(1000005 , -1); 

// int f(vector<int>&v , int tar){
//     if(tar == 0) return 0 ;
//     if(dp[tar] != -1) return dp[tar] ; 

//     int result = INT_MAX ;  
//     for(int i = 0 ; i < v.size() ; i++){

//         if((tar - v[i]) >= 0 ){
//             result = min(result , f(v , tar - v[i])) ; 
//         }
//         else continue;
//     }

//     if(result == INT_MAX) return dp[tar] = INT_MAX ; 

//     return dp[tar] = 1 + result ; 

// }

int main(){

    // int n ; 
    // long tar ; 

    // cin >> n >> tar ; 
    
    // vector<int> coins(n) ; 

    // for(int i = 0 ; i < n ; i++){
    //     coins[i] = i+1 ; 
    // }

    // // int x  = f(coins , tar);
    // // x == INT_MAX ? cout << -1 : cout << x ; 

    // int dp[tar+1] ; 

    //     if(coins.size() == 0 || (coins.size() == 1 && coins[0] > tar)){
    //         cout << -1 ; 
    //         return 0 ; 
    //     }

    // dp[0] = 0 ; 
    // dp[1] = 1 ; 

    // for(int i = 2 ; i <= tar ; i++){
    //     int result = INT_MAX ; 

    //     for(int j = 0 ; j < coins.size() ; j++){

    //         if(i - coins[j] >= 0 ){
    //             result = min(result , dp[i - coins[j]]) ; 
    //         }
    //     }
    //     if(result == INT_MAX) dp[i] = INT_MAX ; 
    //     else dp[i] = result + 1 ; 
    // }

    // if(dp[tar] == INT_MAX) cout << -1  ; 
    // else cout << dp[tar] ; 


    int n;
    int tar;

    cin >> n >> tar;

    vector<int> coins(n);

    for (int i = 0; i < n; i++) {
        cin >> coins[i]; // Input coin denominations
    }

    if (coins.empty() || (coins.size() == 1 && coins[0] > tar)) {
        cout << -1;
        return 0;
    }

    // Initialize the DP array with a large value (INT_MAX)
    vector<int> dp(tar + 1, INT_MAX);
    dp[0] = 0; // Base case: 0 coins needed to make amount 0

    for (int i = 1; i <= tar; i++) {
        for (int j = 0; j < n; j++) {
            if (i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    if (dp[tar] == INT_MAX) {
        cout << -1; // If target is unreachable
    } else {
        cout << dp[tar]; // Minimum coins needed
    }

    return 0;
}