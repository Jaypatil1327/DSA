#include<iostream>
#include<vector>

using namespace std ; 

vector<int> parent ; 
vector<int> rnk ; 

int find(int x) {
    if(parent[x] == x) return x ; 
    return parent[x] = find(parent[x]) ; 
} 

void Union(int a , int b) {
    a = find(a) ; 
    b = find(b) ; 

    if(rnk[a] <= rnk[b]) {
        rnk[b]++ ; 
        parent[a] = b ; 
    } else {
        rnk[a]++ ; 
        parent[b] = a ; 
    }
    return ; 
}

int main() {
    int n, m;
    cin >> n >> m; 

    rnk.resize(n + 1, 0);
    parent.resize(n + 1, 0);

    for(int i = 1; i <= n; ++i) { 
        parent[i] = i; 
    }
    while(m--) {
        string str;
        cin >> str;
        if(str == "Union") {
            int x, y;
            cin >> x >> y;
            Union(x, y);
        } else if(str == "Find") {
            int x;
            cin >> x;
            cout << find(x) << endl; 
        }
        cout << "ended" ; 
    }
    return 0;
}
