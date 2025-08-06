#include <bits/stdc++.h>
using namespace std;

vector<list<pair<int , int> > > graph ; 

void add(int src , int dst , int wi , bool dir = false) {
    graph[src].push_back({dst , wi}) ; 
    if(!dir) {
        graph[dst].push_back({src , wi}) ; 
    }
}

void display () {
    for(int i = 0 ; i < graph.size() ; i++) {
        cout << i << " = " ; 
        for(auto ele : graph[i]) {
            cout << "{ " << ele.first << ", " << ele.second <<" } " ; 
        }
        cout << endl ; 
    }
}

int main() {
    cout << "Enter number OF V : " ; 
    int n ; cin >>n ;
    graph.resize(n , list<pair<int , int >> ()) ; 

    cout << "Enter number of E : " ; 
    int e ; cin >> e ; 

    while(e--) {
        cout << "enter src - dst - weight : " ; 
        int src , dst , wi ; 
        cin >> src >> dst >> wi ; 
        add(src ,dst , wi) ; 
    }
    display() ; 

    return 0;
}