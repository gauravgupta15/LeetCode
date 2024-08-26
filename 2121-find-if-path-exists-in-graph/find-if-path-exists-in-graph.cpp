class Solution {
public:
    void addEdge(unordered_map<int,vector<int>>& adj, int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    } 

    void convertGraph(vector<vector<int>>& edges, unordered_map<int,vector<int>>& adj) {
        for(int i = 0; i < edges.size(); i++) {
            addEdge(adj, edges[i][0], edges[i][1]);
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> adj;
        convertGraph(edges, adj);

        vector<bool> visited(n, false);
        queue<int> q;
        q.push(source);
        visited[source] = true;

        while(!q.empty()) {
            int u = q.front();
            q.pop();
            
            if (u == destination) return true;
            
            for(int v : adj[u]) {
                if(!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }

        return visited[destination];
    }
};
