#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph ; 

void connect(int src , int dst , int dir = false) {
        graph[src].push_back(dst) ; 
        if(!dir) {
            graph[dst].push_back(src) ; 
        }
        return ; 
}


void bfs(int src , vector<int>& distance) {
    set<int> visisted ; 
    queue<int> q ;

    q.push(src) ; 
    distance[src] = 1  ; 
    visisted.insert(src) ; 
    
    while(not q.empty()) {
        int curr = q.front() ; 
        q.pop() ;
        for(auto ele : graph[curr]) {
            if(visisted.find(ele) == visisted.end()) {
                q.push(ele) ; 
                visisted.insert(ele) ; 
                distance[ele] = distance[curr]+1 ; 
            }
        }
    } 
    return ; 
}

int main() {
    int v ; 
    int e ;

    cout << "enter edges "  ; 
    cin >> e ; 

    cout << "enter vertex " ; 
    cin >> v ;

    graph.resize(v) ; 
    
    while(e--){
        int src ;
        int dst ; 
        cout << "Enter src and dst : " ; 
        cin >> src >> dst ; 
        connect(src , dst) ; 
    }

    vector<int> distance(v); 
    bfs(0 , distance) ;
    for(auto ele : distance) cout << ele << " "; 

   return 0;
}