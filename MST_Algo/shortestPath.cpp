// Dijkstra Implemantation : 

#include<bits/stdc++.h>
using namespace std ; 

#define ll long long 
#define pr pair<int,int> 

vector<list<pr>> graph ; 

void add_edge(int u , int v , int wt) {
    graph[u].push_back({wt,v}) ; 
    graph[v].push_back({wt,u}) ; 

    return ; 
}

void PrintShortestPath(unordered_map<int , pr>& mp , int src , int dst) {
    int curr_value = dst ; 
   
    while(1) {
        if(curr_value == src) {
            cout << curr_value ; 
            break;
        }
        else {
            cout << curr_value << " " ; 
            curr_value = mp[curr_value].second ; 
        }
    }
    cout << endl ; 
    cout << "Path Cost : " << mp[dst].first ;
}
void dijkstra(int src , int ver , int dst) {
    priority_queue<pr, vector<pr>, greater<pr>> pq; 
    unordered_map<int , pr> mp ; 
    unordered_set<int> vis ; 

    pq.push({0 , src}) ; 
    for(int i = 0 ; i < ver ; i++) {
        mp[i] = {INT_MAX , 0} ; 
    }
    mp[src] = {0 , -1} ; 

    while(!pq.empty()) {
        pr curr = pq.top() ; 
        pq.pop() ; 

        int curr_ele = curr.second ; 
        int curr_wet = curr.first ; 

        if(vis.find(curr_ele) != vis.end()) {
            continue ; 
        }

        vis.insert(curr_ele) ; 

        for(auto neighbour : graph[curr_ele]) {

            int next_ele = neighbour.second ; 
            int next_wet = neighbour.first ; 
            int wt = mp[curr_ele].first + next_wet ; 

            if(vis.find(next_ele) == vis.end() and wt < mp[next_ele].first) {
                mp[next_ele] = {wt , curr_ele} ; 
                pq.push({wt , next_ele}) ; 
            }
        } 
    }

    for(int i = 0 ; i < ver ; i++) {
        cout << i << " " << mp[i].first << " " << mp[i].second ; 
        cout << endl ; 
    }
    cout << endl ; 
    cout << endl ; 
    cout << endl ;
    
    PrintShortestPath(mp , src , dst) ; 
    return ;
}
int main() {
    int ver , edg ; 
    cin >> ver >> edg ; 

    graph.resize(ver , list<pr> ()) ; 

    while(edg--) {
        int u , v, wt ; 
        cin >> u >> v >> wt ; 

        add_edge(u , v, wt) ; 
    }
    cout << endl ; 
    cout << endl ; 
    cout << endl ;

    dijkstra(0 , ver , 6) ;  
}