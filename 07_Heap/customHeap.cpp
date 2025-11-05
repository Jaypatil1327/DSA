#include<iostream>
#include<bits/stdc++.h>

using namespace std ; 

class cmp {
    public:
    bool operator()(const pair<int,int> &a, const pair<int,int> &b) {
        if(a.second < b.second) return true ;
        else return false ; 
    }
};

int main() {
    priority_queue<pair<int,int> , vector<pair<int,int>> , cmp > pq ; 

    pq.push({2,3});
    pq.push({2,4});
    pq.push({2,1});
    pq.push({2,2});
    pq.push({2,10});

    while(!pq.empty()) {
        cout << pq.top().first << " " << pq.top().second ; 
        cout << endl ; 
        pq.pop() ; 
    }

    return 0 ; 
}
