class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<bool> visited(arr.size() , false) ; 
        queue<pair<int,int>> q ; 

        q.push({start , arr[start]}) ; 

        while(!q.empty()) {
            int idx = q.front().first ; 
            int val = q.front().second ; 
            if(val == 0) return true ; 
            if(visited[idx]) q.pop() ; 
            else {
                int x = idx + val ; 
                int y = idx - val ; 

                if(x >= 0 and x < arr.size()) {
                    q.push({x , arr[x]}) ; 
                } 
                if(y >= 0 and y < arr.size()) {
                    q.push({y , arr[y]}) ; 
                } 
                visited[idx] = true ; 
                q.pop() ; 
            } 
        }
        return false ; 
    }
};