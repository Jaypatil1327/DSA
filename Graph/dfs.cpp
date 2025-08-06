#include <bits/stdc++.h>

using namespace std;


vector<list<int>> graph  ;
unordered_set<int> s ; 
vector<vector<int>> ans ; 

void dfs(int st, int ed , vector<int>& v) {
    if (st == ed) {
        ans.push_back(v) ; 
        return ; 
    }
    s.insert(st);

    for (auto ele : graph[st]) {
        if (s.find(ele) != s.end()) continue;
        else {
            v.push_back(ele) ; 
            dfs(ele , ed , v) ; 
            v.pop_back() ; 
        }
    }

    s.erase(st) ; 
    return ; 
}

void check(int st , int ed) {
    vector<int> v ; 
    return dfs(st , ed , v); 
}

void add_edge(int src , int dst , bool dir = false) {
    graph[src].push_back(dst) ; 
    if(!dir) {
        graph[dst].push_back(src) ; 
    } 
}


int main() {
    int n ; 
    cin >> n ;

    graph.resize(n , list<int> ()) ;  
    int e ; 
    cin >> e ; 

    while(e--) {
        int src , dst ; 
        cin >> src >> dst ; 

        add_edge(src , dst) ; 
    }
    int x , y ; 
    cin >> x >>  y ; 
    check(x , y) ;

    for(auto v1 : ans) {
        cout << x << " "; 
        for(auto v2 : v1) {
            cout << v2 << " " ; 
        }
        cout << endl ; 
    }

    return 0;
}