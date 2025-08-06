#include<bits/stdc++.h>

using namespace std ;

vector<list<int>> graph ; 
vector<bool> visited ; 

void create_graph(int src , int dist) {
    graph[src].push_back(dist) ; 
    graph[dist].push_back(src) ; 
}

bool CycleDetection(int src , int par){
    visited[src] = true ; 
    for(auto neighbour : graph[src]) {
        if(neighbour == par) continue ; 
        else if(visited[neighbour] == 0) {
            bool b = CycleDetection(neighbour , src) ; 
            if(b == true) return true ; 
        }
        else return true ; 
    }
    return false ; 
}

int main() {
    int e , v ;
    cin >> e >> v ; 

    graph.resize(v) ; 
    visited.resize(v) ; 

    while(e--) {
        int src , dist ; 
        cin >> src >> dist ; 
        create_graph(src , dist) ; 
    }
    if(CycleDetection(0 , -1)) 
        cout << "Cycle is Detected" ; 
    else 
        cout << "NO Cycle" ; 
    return 0 ; 
}