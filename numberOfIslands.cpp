class Solution {
    public:
    void dfs(int r, int c,vector<vector<char>>&grid,int n,int m) {
        if (r < 0 || r >= n ||
        c < 0 || c >= m ||
        grid[r][c] != '1')
        return;

        grid[r][c] = '0';

        dfs(r + 1, c,grid,n,m);
        dfs(r - 1, c,grid,n,m);
        dfs(r, c + 1,grid,n,m);
        dfs(r, c - 1,grid,n,m);
}

    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(i,j,grid,n,m);
                }
            }
        }
        return count;
        
    }
};
