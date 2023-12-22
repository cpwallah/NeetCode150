class Solution {
public:
  
    int orangesRotting(vector<vector<int>>& grid) {
       if(grid.empty()){
           return 0;
       }
       int fresh=0;
       queue<pair<int,int>>q;
       for(int i=0;i<grid.size();i++){
           for(int j=0;j<grid[0].size();j++){
               if(grid[i][j]==1){
                   fresh+=1;
               }
               else if(grid[i][j]==2){
                   q.push({i,j});
               }
           }
       }
       int time=0;
       vector<pair<int,int>>dirs={{0,1},{1,0},{-1,0},{0,-1}};
       while(fresh!=0 && !q.empty()){
           int qsize=q.size();
           for(int i=0;i<qsize;i++){
               int rotten1=q.front().first;
               int rotten2=q.front().second;
               q.pop();
               for(auto l:dirs){
                   int a=rotten1+l.first;
                   int b=rotten2+l.second;
               
               if(a>=0 && a<grid.size() && b>=0 && b<grid[0].size() && grid[a][b]==1){
                   grid[a][b]=2;
                   fresh-=1;
                   q.push({a,b});
               }
               
            }
        }
           time+=1;
       }
       if(fresh==0){
           return time;
       }
       return -1;
    }
};
