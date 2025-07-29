class Solution {
public:
    bool isSafe(vector<vector<char>>& board , int row , int col , char dig){
        //horizontal
        for(int j = 0 ; j< 9 ; j++){
            if(board[row][j] == dig){
                return false;
            }
        }

        //vertical 
        for(int i = 0 ; i< 9 ; i++){
            if(board[i][col] == dig){
                return false;
            }
        }

        // grid
        int strow = (row/3) * 3;
        int stcol = (col/3)* 3;
        for(int i = strow ; i<= strow + 2; i++){
            for(int j = stcol ; j<=stcol+2;j++){
                if(board[i][j] == dig){
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    char temp = board[i][j];
                    board[i][j] = '.';  
                    if (!isSafe(board, i, j, temp)) return false;
                    board[i][j] = temp;  
                }
            }
        }
        return true;
    }
};