class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        bool find_word = 0;
        int length = (int)s.size();
        for(int idx = length - 1 ;  idx >= 0 ; idx--){
            if(s[idx] == ' '){
                if(find_word)
                    break;
                else
                    continue;
            }
            find_word = 1;
            ans++;
        }
        return ans;
    }
};

//submission link: https://leetcode.com/submissions/detail/501339240/
