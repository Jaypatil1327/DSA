#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    vector<int> dy2 = {-1, 0, 1};
    vector<int> dx3 = {-1, 0, 1};
    vector<int> dy3 = {1, 1, 1};

    bool valid(int i, int j, int n) {
        return i >= 0 && j >= 0 && i <= n && j <= n;
    }

    void helper2(int i, int j, int n, int moves, int cnt, int& ans,
                 vector<vector<int>>& fruits) {
        if (moves == 0) {
            if (i == n && j == n) {

                ans = max(ans, cnt);
            }
            return;
        }
        for (int k = 0; k < 3; k++) {
            int a = i + 1;
            int b = j + dy2[k];

            if (valid(a, b, n)) {
                int x = fruits[i][j];
                fruits[i][j] = 0;
                helper2(a, b, n, moves - 1, cnt + x, ans, fruits);
                fruits[i][j] = x;
            }
        }
    }

    void helper3(int i, int j, int n, int moves, int cnt, int& ans,
                 vector<vector<int>>& fruits) {
        if (moves == 0) {
            if (i == n && j == n) {
                ans = max(ans, cnt);
            }
            return;
        }
        for (int k = 0; k < 3; k++) {
            int a = i + dx3[k];
            int b = j + dy3[k];

            if (valid(a, b, n)) {
                int x = fruits[i][j];
                fruits[i][j] = 0;
                helper3(a, b, n, moves - 1, cnt + x, ans, fruits);
                fruits[i][j] = x;
            }
        }
    }

    int maxCollectedFruits(vector<vector<int>>& fruits) {
        int player1 = 0;
        int player2 = 0;
        int player3 = 0;

        int n = fruits.size() - 1;

        for (int i = 0; i <= n; i++) {
            player1 += fruits[i][i];
            fruits[i][i] = 0;
        }

        helper2(0, n, n, n, 0, player2, fruits);
        helper3(n, 0, n, n, 0, player3, fruits);
        cout << player3 ;

        return (player1 + player2 + player3);
    }
};




// there we cannot use 3D DP and it will exceed memory limit and solved to later 
