#include <bits/stdc++.h>
using namespace std;


vector<list<int>> graph ; 

void connect(int src , int dst , bool dir = false) {
    graph[src].push_back(dst) ;
    
    if(!dir) graph[dst].push_back(src) ; 
}

set<int> visited ; 

void dfs(int i) {
    visited.insert(i) ; 
    for(auto ele : graph[i]) {
        if(visited.find(ele) == visited.end()) {
            dfs(ele) ; 
        }
    }
}
int cc(int ver) {
    int result = 0 ; 
    for(int i = 0 ; i < ver ; i++) {
        if(visited.find(i) == visited.end()) {
            result++ ; 
            dfs(i) ; 
        }
    }
    return result ; 
}

int main() {
    cout << "Enter edges : " ; 
    int e ; cin >> e ; 
    
    cout << "Enter Vertex : " ; 
    int v ; cin >> v ;
    cout << "Enter src and dest for each edges " ;  

    graph.resize(v) ; 
    while(e--) {
        int src , dest ; 
        cin >> src >> dest ; 

        connect(src , dest) ; 
    }
    cout << cc(v) ; 
    return 0;
}