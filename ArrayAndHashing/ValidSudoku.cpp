class Solution {
public:
    static bool isSafe(vector<vector<char>>board,int row,int col){
       char yes=board[row][col];
        board[row][col]='.';
        for(int i=0;i<9;i++){
            if(board[row][i]==yes){
                return false;
            }
            if(board[i][col]==yes){
                return false;
            }
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==yes){
                return false;
            }
        }
        return true;
    } 
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    continue;
                }
                else if(!isSafe(board,i,j)){
                    return false;
                }
            }
        }
        return true;
    }
};
