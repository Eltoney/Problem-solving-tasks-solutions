class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        bool toepliz = 1;
        for(int i = 0 ; i < n ; i++){
            int x = i , y = 0;
            int cur = matrix[x++][y++];
            while(x < n && y < m){
                toepliz &= (cur == matrix[x++][y++]);
            } 
        }
        
        for(int j = 0 ; j < m ;j++ ){
            int x = 0 , y = j;
            int cur = matrix[x++][y++];
            while(x < n && y < m){
                toepliz &= (cur == matrix[x++][y++]);
            }
        }
        return toepliz;
    }
};
