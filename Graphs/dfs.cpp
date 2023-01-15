void dfs(int v,vector<int> adj[],vector<bool> &vis) {
    vis[v] = true;
    for (int u : adj[v]) {
        if (!vis[u])
            dfs(u,adj,vis);
    }
}