class NumMatrix {
    vector<vector<int>> cum;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        cum = vector<vector<int>> (rows + 1 , vector<int> (cols + 1 , 0));
        
        for(int i = 1 ; i <= rows ; i++){
            for(int j = 1 ; j <= cols; j++){
                cum[i][j] += cum[i - 1][j] + cum[i][j - 1] + 
                    matrix[i - 1][j - 1] - cum[i - 1][j - 1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return cum[row2 + 1][col2 + 1] - cum[row1][col2 + 1] 
            - cum[row2 + 1][col1] + cum[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
