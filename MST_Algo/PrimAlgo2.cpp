#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define pr pair<int,int> 

vector<list<pr>> graph ; 

void add_edges(int u , int v , int wt) {
    graph[u].push_back({wt , v}) ; 
    graph[v].push_back({wt , u}) ; 
    return ; 
}

ll Prims(int src , int ver) {
    priority_queue<pr , vector<pr> , greater<pr>> pq ; 
    unordered_map<int ,int> mp ; 
    unordered_set<int> st ; 
    vector<int> parent(ver) ; 

    pq.push({-1 , 0}) ; 
    for(int i = 0 ; i < ver ; i++) mp[i] = INT_MAX ; 
    mp[0] = -1 ; 

    int vertexCounter = 0 ; 
    int result = 0 ; 

    while(vertexCounter < ver and !pq.empty()) {
        pr curr = pq.top() ; 
        pq.pop() ; 

        int weight = curr.first ; 
        int element = curr.second ; 

        if(st.find(element) != st.end()) continue;

        vertexCounter++ ; 
        result+=weight ; 
        st.insert(element) ; 

        for(auto neighbour : graph[element]) {
            int next_element = neighbour.second ; 
            int next_weight = neighbour.first ; 

            if(st.find(next_element) == st.end() and mp[next_element] > next_weight) {
                pq.push({next_weight , next_element}) ; 
                parent[next_element] = element ; 
                mp[next_element] = next_weight ; 
            }
        } 
    }
    for(int i = 0 ; i < ver ; i++) {
        cout << i << " " << mp[i] << " " << parent[i] ; 
        cout << endl ; 
    }
        
    return result ;

}

int main() {
    int vertex , edges ;
    cin >> vertex >> edges ; 
    graph.resize(vertex , list<pr> ()) ; 

    while(edges--) {
        int u , v , wt ;
        cin >> u >> v >> wt ; 
        add_edges(u,v,wt) ; 
    }
    cout << endl ; 
    cout << endl ; 
    cout << endl ; 
    cout << endl ; 
    cout << "The Shortest path total weight : "  << Prims(0 , vertex) ; 
}