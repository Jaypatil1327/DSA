#include<algorithm>
#include<iostream>
#include<vector>

using namespace std ;

int main(){
    int k , l , m ; 
    cin >> k >> l >> m ; 

    vector<bool> dp(10000002) ; 
    dp[1] = dp[k] = dp[l] = 1 ; 

    for(int i = 2 ; i < dp.size() ; i++) {
        if(i == k || i == l) continue;
        if(dp[i-1] and (i-k > 0 ? dp[i-k] : 1) and (i-l > 0 ? dp[i-l] : 1)) dp[i] = 0 ; 
        else dp[i] = 1 ; 

    }

    for(int i = 0 ; i < m ; i++){
        int n ; 
        cin >> n ; 
        if(dp[n] == 0) cout << "B" ;
        else cout << "A" ; 
    }
}