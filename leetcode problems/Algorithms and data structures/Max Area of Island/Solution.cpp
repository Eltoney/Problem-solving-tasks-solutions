class Solution {
public:
    int n , m , cnt = 0;
    vector<int> dx = {1 , -1 , 0 , 0};
    vector<int> dy = {0 , 0 , 1 , -1};
    
    
    bool valid(int i , int j ,vector<vector<int>>& grid){
        return (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 1);
    }
    
    
    void DFS(int i , int j , vector<vector<int>>& grid){
        cnt++;
        grid[i][j] = 2;
        
        for(int  k = 0 ; k < 4 ; k++){
            int nx = i + dx[k];
            int ny = j + dy[k];
            
            if(valid(nx , ny , grid))
                DFS(nx , ny, grid);
        }
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = (int)grid.size() , m = (int)grid[0].size();
        
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ;j++){
                if(grid[i][j] == 1){
                    cnt = 0;
                    DFS(i , j , grid);
                    ans = max(ans , cnt);
                }
            }
        }
        return ans;
        
    }
};

https://leetcode.com/submissions/detail/501772952/
