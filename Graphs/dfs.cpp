void dfs(int node, vector<int> adj[], vector<bool> &vis)
{
    vis[node] = true;
    // cout << node << " ";
    for (auto x : adj[node])
    {
        if (vis[x])
        {
            ;
        }
        else
        {
            dfs(x, adj, vis);
        }
    }
}