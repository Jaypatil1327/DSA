#include <iostream>
#include <vector>
#include <unordered_map>
#include<climits>

using namespace std;

vector<unordered_map<int, int>> segment;

void f(int i, int low, int hi, vector<int>& v) {
    if (low == hi) {
        segment[i][v[low]] = 1;  
        return; 
    }
    int mid = (low + hi) / 2;
    f(2 * i + 1, low, mid, v);
    f(2 * i + 2, mid + 1, hi, v);

    for (auto &ele : segment[2 * i + 1]) {
        segment[i][ele.first] += ele.second;
    }
    for (auto &ele : segment[2 * i + 2]) {
        segment[i][ele.first] += ele.second;
    }
}

int getFreq(int i  , int low , int hi , int l , int r  , int val) {
    if(low >= l and r >= hi) return segment[i][val] ; 
    if(hi < l or r < low) return INT_MIN ;
    else {
        int mid = ( low + hi ) / 2 ; 
        int left = getFreq(2*i+1 , low , mid , l , r , val) ; 
        int right = getFreq(2*i+2 , mid+1, hi , l , r , val) ;     
        return left+right ;
    }
}

int main() {
    vector<int> v{12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56};
    segment.resize(4 * v.size());
    f(0, 0, v.size() - 1, v);

    cout << getFreq(0, 0, v.size() - 1, 0 , 11 , 33) ; 

    return 0;
}
