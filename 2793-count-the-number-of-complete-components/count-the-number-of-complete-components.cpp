class Solution {
public:
    
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
    vector<vector<int>> adj(n);

    for(auto edge : edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    vector<int> vis(n, 0);
    int count = 0;

    for(int i = 0; i < n; i++){   
        if(!vis[i]){
            queue<int> q;
            q.push(i);
            vis[i] = 1;

            int nodes = 0;
            int edges = 0;

            while(!q.empty()){
                int node = q.front();
                q.pop();
                nodes++;

                for(auto it : adj[node]){
                    edges++;   

                    if(!vis[it]){
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }

            edges /= 2; 

            if(edges == (nodes * (nodes - 1)) / 2){
                count++;
            }
        }
    }

    return count;
}
    
};