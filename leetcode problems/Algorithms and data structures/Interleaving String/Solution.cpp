class Solution {
    string s1 , s2 , s3;
     int  n , m , l;
    int mem[109][109][209];

    int dp(int i , int j , int k){
        if(k == l){
            return (i == n && j == m);
        }
        
        int &ret = mem[i][j][k];
        
        if(ret != -1)
            return ret;
        ret = 0;
        if(i < n && s1[i] == s3[k]){
            ret |= dp(i + 1 , j , k+1);
        }
        if(j < m && s2[j] == s3[k]){
            ret |= dp(i , j + 1 , k + 1);
        }
        return ret;
    }
    
    
    public:
    bool isInterleave(string s1, string s2, string s3) {
        this->s1 = s1 ;
        this->s2 = s2;
        this->s3 = s3;
        n = s1.size();
        m = s2.size();
        l = s3.size();
        memset(mem, -1, sizeof(mem));
        return (dp(0 , 0 , 0) == 1);
    }
};
