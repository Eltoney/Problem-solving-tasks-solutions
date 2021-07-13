class Solution {

    
    int mem[109][109];
    
    bool rec(string s1 ,int i ,  string s2 ,int j , string s3 , int k){
        if(i == s1.size()){
            return s2.substr(j) == s3.substr(k);
        }
        if(j == s2.size()){
            return s1.substr(i) == s3.substr(k);
        }
        
        int &res = mem[i][j];
        if(res != -1){
            return (res == -1);
        }
        
        res = 0;
        if(s1[i] == s3[k]){
            res |= rec(s1 , i + 1 , s2 , j , s3 , k + 1);
        }
        
        if(s2[j] == s3[k]){
            res |= rec(s1 , i , s2 , j + 1 , s3 , k + 1);
        }
        return (res == 1);
    }
    
    
 public:  
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.size(); 
        int m = s2.size();
        int l = s3.size();
        if(n + m != l)
            return false;
        memset(mem , -1 , sizeof(mem));
        return rec(s1 , 0 , s2 , 0 , s3 , 0);
    }
};
