class Solution {
public:
    void dfs(vector<vector<char>>& grid,int r,int c){
        int m=grid.size();
        int n=grid[0].size();

        if(r>=m ||c>=n || r<0 ||c<0){
            return;
        }
        if(grid[r][c]=='0') return;
        grid[r][c]='0';
        
        dfs(grid,r+1,c);
        dfs(grid,r-1,c);
        dfs(grid,r,c+1);
        dfs(grid,r,c-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int island=0;
        for(int r=0;r<grid.size();r++){
            for(int c=0;c<grid[0].size();c++){
                if(grid[r][c]=='1'){
                    island++;
                    dfs(grid,r,c);
                }
            }
        }
        return island;
    }
};
