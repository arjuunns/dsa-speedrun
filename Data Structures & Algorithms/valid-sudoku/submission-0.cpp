class Solution {
public:
    bool validInRow(char ch,int row,int col,vector<vector<char>>& board){
        int n = board.size();
        for(int c=0;c<n;c++){
            if(board[row][c]==ch and c!=col) return false;
        }
        return true;
    }
    bool validInCol(char ch,int row,int col,vector<vector<char>>& board){
        int n = board.size();
        for(int r=0;r<n;r++){
            if(board[r][col]==ch and r!=row) return false;
        }
        return true;
    }
    bool validInSquare(char ch,int row,int col,vector<vector<char>>& board){
        int n = board.size();
        int sr = (row/3)*3;
        int sc = (col/3)*3;
        for(int r = sr;r<sr+3;r++){
            for(int c=sc;c<sc+3;c++){
                if(board[r][c]==ch and r!=row and c!=col) return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        for(int i = 0;i<n;i++){
            for(int j=0;j<n;j++){
                char ch = board[i][j];
                if(ch!='.'){
                if(!validInRow(ch,i,j,board)) return false;
                if(!validInCol(ch,i,j,board)) return false;
                if(!validInSquare(ch,i,j,board)) return false;
                }
            }
        }
        return true;
    }
};
