class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<pair<int,int>>p;
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(matrix[i][j]==0){
                    p.push_back({i,j});
                }
            }
        }
        for(auto [i,j] : p){
            for(int row = 0;row<r;row++){
                matrix[row][j]=0;
            }
            for(int col = 0;col<c;col++){
                matrix[i][col]=0;
            }
        }
    }
};
