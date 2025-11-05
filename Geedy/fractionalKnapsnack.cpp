#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> &v1 , vector<int> &v2) {
    double r1 = (v1[0] * 1.0) / (v1[1] * 1.0) ; 
    double r2 = (v2[0] * 1.0) / (v2[1] * 1.0) ; 
    return r1 > r2 ; 
}

int fractionalKnp(vector<vector<int>> & arr , int capacity) {
    sort(arr.begin() , arr.end() , cmp) ; 

    double result = 0 ; 
    for(int i = 0 ; i < arr.size() ; i++) {
        if(capacity >= arr[i][1]) {
            result += arr[i][0] ; 
            capacity-=arr[i][1] ; 
        } else {
            double profit = (arr[i][0] * 1.0/ arr[i][1]) * capacity ; 
            result += profit ; 
            break;
        }
    }
    return result ; 
}
int main() {
    vector<vector<int>> arr ; 
    int n ; 
    int capacity ; 

    cout << "enter capacity and total val: "  ; 
    cin >> capacity >> n ; 
    
    for (int i = 1; i <= n; i++)
    {   cout << "enter values : " ; 
        int val1 ; 
        int val2; 
        cin >> val1 >> val2 ; 
        arr.push_back({val1 , val2}) ; 
    }

    cout << fractionalKnp(arr  ,capacity) ; 
    
    return 0; 
}