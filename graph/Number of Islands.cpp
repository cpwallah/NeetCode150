class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    fun(grid,i,j);
                    count+=1;
                }
            }
        }
        return count;
    }
    void fun(vector<vector<char>>&grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
            return;
        }
        if(grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        fun(grid,i+1,j);
        fun(grid,i-1,j);
        fun(grid,i,j+1);
        fun(grid,i,j-1);
    }
};
