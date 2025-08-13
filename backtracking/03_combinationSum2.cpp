#include<iostream>
using namespace std ;
#include<vector>

vector<vector<int>> ans ; 

void f(vector<int> &v , vector<int> temp , int idx , int tar) {
    if(tar == 0) {
        ans.push_back(temp) ; 
        return ; 
    }
    else if(v[idx] > tar || idx >= v.size()) return ;
    
    for(int i = 0 ; i < v.size() ; i++){
        int j = i+1 ; 
        while(v[i] == v[j]) j++ ; 

        temp.push_back(v[i]) ; 
        f(v , temp , j , tar-v[i]) ; 
        temp.pop_back() ; 
    }
    return ; 
}
int main() {
    
}
