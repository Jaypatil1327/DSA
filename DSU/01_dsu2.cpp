#include<iostream>
#include<vector>

using namespace std ; 

vector<int> dsu ; 
vector<int> sze ; 
vector<int> maximal ; 
vector<int> minimal ; 


int find(int x) {
    if(dsu[x] == x)  return x; 
    else return dsu[x] = find(x) ; 
}

void Union(int x , int y) {
    int a = find(x) ; 
    int b = find(y) ; 
    if(a == b) return ; 
    if(sze[a] > sze[b]) {
        sze[a]+=sze[b] ; 
        dsu[b] = a ; 

        maximal[a] = max(maximal[a] , maximal[b]) ; 
        minimal[a] = min(minimal[a] , minimal[b]) ; 
    } else {
        sze[b]+=sze[a] ; 
        dsu[a] = b; 

        maximal[b] = max(maximal[a] , maximal[b]) ; 
        minimal[b] = min(minimal[a] , minimal[b]) ; 
    }
}
int main() {
    int n ;
    cin >> n ; 
    sze.resize(n+1 , 1) ; 
    dsu.resize(n+1) ; 
    minimal.resize(n+1) ; 
    maximal.resize(n+1) ; 

    for(int i = 0 ; i <= n ; i++) maximal[i] = minimal[i] = dsu[i] = i ; 

    cout << "Enter Number of Operations : " ;
    int op ; 
    cin >> op ;  

    while(op--) {
       string str ; 
       cin >> str ; 
       if(str == "union") {
        int x , y ; 
        cin >> x >> y ; 
        Union(x ,y) ; 
       } else {
        int x ; 
        cin >> x ;
        x = find(x) ; 
        cout << "size : " << sze[x] << endl ; 
        cout << "minimum : " << minimal[x] << endl ; 
        cout << "maximum : " << maximal[x] << endl; 
       }
       cout << "heading toward next operation " << endl; 
    }
}