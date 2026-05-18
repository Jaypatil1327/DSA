class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map<int, vector<int>> mp;
        vector<bool> visited(arr.size());

        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]].push_back(i);
        }

        int lvl = 0;
        queue<int> q;

        q.push(0);
        q.push(INT_MAX) ; 

        while (!q.empty()) {
            int idx = q.front();
            if (idx == arr.size() - 1)
                return lvl;
            else if(idx == INT_MAX) {
                lvl++ ; 
                q.pop() ; 
                q.push(INT_MAX) ; 
            }
            else if (visited[idx])
                q.pop();
            else {
                int x = idx - 1;
                int y = idx + 1;

                if (x >= 0) {
                    q.push(x);
                }
                if (y < arr.size())
                    q.push(y);
                
                for(int i = mp[arr[idx]].size()-1 ; i >= 0 ; i--) {
                    if(idx == mp[arr[idx]][i] and visited[mp[arr[idx]][i]]) continue ; 
                    q.push(mp[arr[idx]][i]) ; 
                }
                visited[idx] = true ; 
                q.pop();
            }
        }
        return -1 ; 
    }
};