class Solution {
public:
    void dfs(vector<vector<char>>& grid,int r,int c){
        int n=grid.size();
        int m=grid[0].size();
        if(r>=n || c>=m || r<0 ||c<0){
            return;
        }
        if(grid[r][c]=='0'){
            return;
        }
        grid[r][c]='0';

        dfs(grid,r+1,c);
        dfs(grid,r-1,c);
        dfs(grid,r,c+1);
        dfs(grid,r,c-1);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int islands=0;
        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                if(grid[r][c]=='1'){
                    islands++;
                    dfs(grid,r,c);
                }
            }
        }
        return islands;
    }
};