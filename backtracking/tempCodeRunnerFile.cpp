unordered_map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        mp[i] = 1;
    }

    vector<string> str((n * 2) - 1, "*");

    f(str, 0, mp);