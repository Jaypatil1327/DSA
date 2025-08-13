#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph  ;
unordered_set<int> s ; 

void add_edge(int src , int dst , bool dir = false) {
    graph[src].push_back(dst) ; 
    if(!dir) {
        graph[dst].push_back(src) ; 
    } 
}

void display() {
    for(int i = 0 ; i < graph.size() ; i++) {
        cout << i << "-> "; 
        for(auto ele : graph[i]) {
            cout << ele <<  ", "; 
        }
        cout << endl ; 
    }
}

bool dfs(int st, int ed) {
    if (st == ed) return true;
    s.insert(st);

    for (auto ele : graph[st]) {
        if (s.find(ele) != s.end()) continue;
        if (dfs(ele, ed)) return true; // Only return if dfs returns true
    }
    
    return false;
}

bool check(int st , int ed) {
    return dfs(st , ed) ; 
}

int main() {
    int n ; 
    cin >> n ;

    graph.resize(n+1 , list<int> ()) ; 
    int e ; 
    cin >> e ; 

    while(e--) {
        int src , dst ; 
        cin >> src >> dst ; 

        add_edge(src , dst) ; 
    }
    display() ; 
    // int x , y ; 
    // cin >> x >>  y ; 
    // cout << check(x , y) ;
    return 0;
}