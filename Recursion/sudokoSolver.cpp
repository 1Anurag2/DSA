class Solution {
public:

    bool isSafe(vector<vector<char>>& board , int row , int col ,char dig){
        // horizontal 
        for(int j = 0; j< 9 ; j++){
            if(board[row][j] == dig){
                return false;
            }
        }

        //vertical 
        for(int i = 0 ; i< 9 ;i++){
            if(board[i][col] == dig){
                return false;
            }
        }

        // grid
        int strow = (row/3) * 3;
        int stcol = (col/3) * 3;
        for(int i = strow ; i<=strow+2; i++){
            for (int j = stcol ; j<= stcol + 2; j++){
                if(board[i][j] == dig){
                    return false;
                }
            }
        }
        return true;
    }
    bool helper(vector<vector<char>>& board , int row , int col){
        if(row == 9){
            return true;
        }

        int nextrow = row;
        int nextcol = col+1;
        if(nextcol == 9){
            nextrow = row +1;
            nextcol = 0;
        }

        if(board[row][col]!= '.'){
            return helper(board , nextrow , nextcol);
        }

        for(char dig = '1';dig<='9';dig++){
            if(isSafe(board , row,col , dig)){
                board[row][col] = dig;
                if(helper(board,nextrow , nextcol)){
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board , 0 , 0);
    }
};