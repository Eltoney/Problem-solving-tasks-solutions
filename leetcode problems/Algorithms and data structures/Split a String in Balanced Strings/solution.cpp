class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0 ;
        int l = 0 , r = 0;
        int n = s.size();
        for(int i = 0 ; i< n ; i++){
            (s[i] == 'R' ?  r++ : l++);
            if(r && r == l){
                cnt++;
                r = 0 , l = 0;
            }
        }
        return cnt;
    }
};
