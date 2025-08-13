#include<iostream>
#include<climits>
#include<vector>

using namespace std ; 

// vector<int> dp ; 

// int f(int n){
//     if(n == 0) return 0 ; 
//     if(n <= 9) return 1 ; 

//     if(dp[n] != -1) return dp[n] ; 

//     int temp = n ;
//     int ans = INT_MAX ; 

//     while(temp > 0){
//         int diff = temp % 10 ; 
//         if(diff != 0){
//             ans = min(ans , f(n - diff)) ; 
//         }
//         temp /= 10 ; 
//     }
//     return dp[n] = 1 + ans ; 
// }

void method2(int n){
    if(n <= 9){
        cout << 1 ; 
        return ; 
    }

    int dp[n+1] ; 

    for(int i = 1 ; i <= 9 ; i++){
        dp[i] = 1 ; 
    }

    for(int i = 10 ; i < n+1 ; i++){
        int temp = i ; 
        int result = INT_MAX ; 

        while(temp > 0){
            int diff = temp % 10 ; 

            if(diff != 0){
                result = min(result , dp[i-diff]) ;
            }
            temp /= 10 ; 
        }
        dp[i] = 1 + result ; 
    }

    cout << dp[n] ;
}

int main(){

    // dp.clear() ; 
    // dp.resize(1000005 , -1) ; 

    int n ; 
    cin >> n ;
    // cout << f(n) ;     // method 1 bottom up approach
    method2(n) ; 



    return 0 ; 
}