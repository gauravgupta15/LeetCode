class Solution {
public:
    void bfs(vector<bool>&visited, vector<vector<int>>& adj, int start) {
        queue<int>q;
        q.push(start);
        visited[start] = true;
        while(!q.empty()) {
            int u = q.front();
            q.pop();
            for(int i=0; i<adj[u].size(); i++) {
                if(adj[u][i] && !visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool>visited(n+1, false);
        int cnt = 0;
        for(int i=0; i<n; i++) {
            if(!visited[i])  {
                cnt++;
                bfs(visited,isConnected,i);
            }
        }
        return cnt;
    }
};