class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        bool toepliz = 1;
        for(int i = 0 ; i < n ; i++){
            int x = i , y = 0;
            set<int> st;
            while(x < n && y < m){
                st.insert(matrix[x][y]);
                x++ , y++;
            }
            toepliz &= (st.size() == 1);   
        }
        
        for(int j = 0 ; j < m ;j++ ){
            int x = 0 , y = j;
             set<int> st;
            while(x < n && y < m){
                st.insert(matrix[x][y]);
                x++ , y++;
            }
            toepliz &= (st.size() == 1);  
        }
        return toepliz;
    }
};
