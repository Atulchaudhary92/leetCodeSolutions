class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        vector<int>vis(adj.size(),0);
        vector<int>ans;
        queue<int>q;
        for(int i=0;i<adj.size();i++){
            if(!vis[i]){
                
                vis[i]=1;
                q.push(i);
                
                while(!q.empty()){
                    
                 int it=q.front();
                 ans.push_back(it);
                 q.pop();
                 for(auto j:adj[it]){
                     if(!vis[j]){
                     q.push(j);
                     vis[j]=1;
                   }
                  }
                }
            }
        }
        return ans;
    } 
};
