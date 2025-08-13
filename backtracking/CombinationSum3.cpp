#include<iostream>
#include<vector>

using namespace std ; 

vector<vector<int>> ans ; 

void f(int sum , int idx , int k , int n , vector<int> &v) {

    if(k == 0 and sum == n) {
        ans.push_back(v) ; 
        return ; 
    }
    if(idx > 9) return ; 

    for(int i = idx ; i <= 9 ; i++) {
        if(sum <= n) {
            v.push_back(i) ; 
            sum+=i ; 
            f(sum ,  i+1 , k-1 , n , v) ; 
            sum-=i ; 
            v.pop_back() ; 
        }
    }
}
int main() {
    vector<int> x  ; 
    f(0 , 1 , 3 , 9 , x ) ; 
    for(auto out : ans) {
        for(auto inn : out) {
            cout << inn << " " ; 
        }
        cout << endl ; 
    }
}