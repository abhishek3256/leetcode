class Solution {
public:
    void dfs(int node, vector<int> adj[] , vector<int>&vis){
        vis[node]=1;
        for( auto b: adj[node] ){
            if(!vis[b]){
                dfs(b,adj,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<int> adj[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j] == 1 && i != j){
                adj[i].push_back(j);
                adj[j].push_back(i);
                }
            }
        }
        vector<int>vis(V,0);
        int provinces=0;
        for (int node = 0; node < V; node++){
            if(!vis[node]){
                provinces++;
                dfs(node,adj,vis);
            }
        }
        return provinces;
        
    }
};