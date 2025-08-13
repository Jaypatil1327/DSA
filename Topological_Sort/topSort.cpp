#include<bits/stdc++.h> 
using namespace std ;

vector<list<int>> graph ; 
vector<int> inDegree ; 
int v ; 

void add_edge(int x , int y , bool dir = true) {
    graph[x].push_back(y) ; 
    inDegree[y]++ ; 

    if(dir) {
        graph[y].push_back(x) ; 
        inDegree[x]++ ; 
    }
}

void topological_Sort() {
    unordered_set<int> st ;
    queue<int> pq ; 

    for(int i = 0 ; i < v ; i++) {
        if(inDegree[i] == 0) {
            pq.push(i) ;  
            st.insert(i) ; 
        }
    }

    while(not pq.empty()) {
        int curr = pq.front() ; 
        pq.pop() ; 

        cout << curr << " " ; 

        for(auto neighbour : graph[curr]) {
            if(st.find(neighbour) == st.end()) {
                inDegree[neighbour]-- ; 
                if(inDegree[neighbour] == 0) {
                    st.insert(neighbour) ; 
                    pq.push(neighbour) ; 
                }
            }
        }
    }
}

int main() {
    int vertex ; 
    cin >> vertex ; 
    v = vertex+1 ;  

    graph.resize(v , list<int> ()) ; 
    inDegree.resize(v , 0) ; 

    int edges ; 
    cin >> edges ; 

    while(edges--) {
        int x , y ; 
        cin >> x >> y ; 

        add_edge(x , y , false) ; 
    }
    topological_Sort() ; 
}