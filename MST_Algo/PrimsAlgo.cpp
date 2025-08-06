#include<bits/stdc++.h>
#define ll long long int
#define pp pair<int,int>
using namespace std;

vector<list<pp>> gr;

void add_edge(int u , int v , int wet , bool biDir=true) {
    gr[u].push_back({v,wet});
    if(biDir) {
        gr[v].push_back({u,wet});
    }
}

ll Prims(int src , int n) {
    priority_queue<pp , vector<pp> , greater<pp>> pr;
    unordered_set<int> vis;
    unordered_map<int,int> mp;
    vector<int> par(n);
    
    for(int i = 0 ; i < n ; i++) {
        mp[i] = INT_MAX;
    }
    mp[src] = 0;

    pr.push({0 , src});
    int totalVertex = 0;
    ll result = 0;

    while(totalVertex < n && !pr.empty()) {
        pp curr = pr.top(); pr.pop();

        if(vis.find(curr.second) != vis.end()) {
            continue;
        }

        vis.insert(curr.second);
        result += curr.first;
        totalVertex++;

        for(auto neighbour : gr[curr.second]) {
            if(vis.find(neighbour.first) == vis.end() && mp[neighbour.first] > neighbour.second) {
                mp[neighbour.first] = neighbour.second;
                pr.push({neighbour.second , neighbour.first});
                par[neighbour.first] = curr.second;
            }
        }
    }
    return result;
}

int main() {
    int n , m;
    cin >> n >> m;
    gr.resize(n, list<pp>());

    while(--m) {
        int u , v , wet;
        cin >> u >> v >> wet;
        add_edge(u, v, wet);
    }

    int src;
    cin >> src;
    
    cout << Prims(src, n) << endl;
}
