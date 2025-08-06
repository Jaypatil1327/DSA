#include<iostream> 
#include<vector> 
using namespace std ; 


vector<int> rnk ; 
vector<int> par ; 

int find(int n) {
    if(par[n] == n) return n ; 
    else {
        return par[n] = find(par[n]) ; 
    }
}

void Union(int x , int y) {
    int a = find(x) ; 
    int b = find(y) ; 
    if(a == b ) {
        cout << "Cycle Detected " ; 
    }
    if(rnk[a] >= rnk[b]) {
        par[b] = a ; 
        rnk[a]++ ; 
    } else {
        par[a] = b ; 
        rnk[b]++ ;  
    }
}
int main() {
    par.resize(10) ; 
    rnk.resize(10 , 0) ; 

    for(int i = 0 ; i < par.size() ; i++ ) par[i] = i ; 
    int a = 1 ; 
    while(a) {
        string str ; 
        cin >> str ; 
        if(str == "union") {
            cout << "your Performing union operation" << endl ; 
            int x , y ; 
            cin >> x >> y ; 
            Union(x , y) ; 
        } else if(str == "find") {
            cout << "your Performing find Operation" << endl ;
            int x ;  
            cin >> x ; 
            cout << find(x) ; 

        }
        else a = 0 ; 
        cout << endl ; 
    }
    return 0 ; 
}