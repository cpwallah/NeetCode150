class Solution {
public: 
    int count=INT_MIN;
    void dfs(vector<vector<int>>&grid,int i,int j,int& x){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
            return;
        }
        if(grid[i][j]==0){
            return;
        }
        x+=1;
        grid[i][j]=0;
        dfs(grid,i+1,j,x);
        dfs(grid,i-1,j,x);
        dfs(grid,i,j+1,x);
        dfs(grid,i,j-1,x);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    int x=0;
                    dfs(grid,i,j,x);
                    count=max(count,x);
                }
            }
        }
        if(count==INT_MIN){
            return 0;
        }
        return count;
    }
};
