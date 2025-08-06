#include<iostream>
using namespace std;

string usingLeft(int n, int i) {
    return (n & (1 << i)) ? "Bit is set" : "Not a set Bit";
}

string usingRight(int n, int i) {
    return ((n >> i) & 1) ? "Bit is set" : "Not a set Bit";
}

int main() {
    int x = 8;
    int i = 1;
    cout << usingRight(x, i) << endl;
    cout << usingLeft(x, i) << endl;
}
