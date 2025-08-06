#include<iostream>
#include<bits/stdc++.h>

using namespace std ; 

vector<int> par ;
vector<int> size ; 

int find(int n) {
    if(par[n] == n) return n ; 
    else return par[n] = find(par[n]) ; 
}

bool Union(int x, int y) {
    int a = find(x); 
    int b = find(y) ; 
    if(a == b) return false;  
    if(size[a] >= size[b]) {
        par[b] = a ; 
        size[a] += size[b] ; 
        return true; 
    } else {
        par[a] = b ; 
        size[b] += size[a] ; 
        return true; 
    }
}

bool customComp(vector<int> a , vector<int> b){
    return a[2] < b[2] ;     
}

int main() {
    int vertex ; 
    int edges ; 

    cin >> vertex >> edges ; 

    vector<vector<int>> vec ; 
    par.resize(vertex) ; 
    for(int i = 0 ; i < vertex ; i++) par[i] = i ; 
    size.resize(vertex , 1) ; 

    while(edges--) {
        int x,y,z ; 
        cout << "input ver1" ; 
        cin >> x ; 
        cout << "input ver2" ; 
        cin >> y ; 
        cout << "input weight" ; 
        cin >> z ; 

        vec.push_back({x,y,z}) ; 
    }

    sort(vec.begin() , vec.end() , customComp) ; 

    for(auto ele : vec) {
        cout << ele[0] << " " << ele[1] << " " << ele[2] ; 
        cout << endl ; 
    }

    int ans = 0 ; 
    for(auto ele : vec) {
        if(Union(ele[0] , ele[1])) ans+=ele[2] ; 
    }
    cout << "Ans : " << ans ; 

}