class Solution {
public:
    void dfs(vector<vector<int>>&vec,vector<int>&isVis,int it){
        isVis[it]=1;
        for(int i=0;i<vec[it].size();i++){
            if( vec[it][i] && !isVis[i]){
                dfs(vec,isVis,i);
            }
        }
        return ;
    }
    int findCircleNum(vector<vector<int>>&isConnected) {
        int count=0;
        vector<int>isVis(isConnected.size(),0);
        for(int i=0;i<isConnected.size();i++){
                if(!isVis[i]){
                    count++;
                    dfs(isConnected,isVis,i);
                
            }
            
        } 
        return count;       
    }
};
