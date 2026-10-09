class Solution {
public:
    void dfs(vector<vector<char>>& grid, int r,int c,int n,int m){
        if(r>=n || c>=m || r<0 || c<0 || grid[r][c]=='0' ) return;

        grid[r][c]='0';

        int dirx[] = {0 , 1 , -1 , 0};
        int diry[] = {-1, 0 , 0 , 1};

        for(int i=0;i<4;i++){
                dfs(grid, r+dirx[i], c+diry[i], n, m);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int island=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j,n,m);
                    island++;
                }
            }
        }
        return island;
    }
};