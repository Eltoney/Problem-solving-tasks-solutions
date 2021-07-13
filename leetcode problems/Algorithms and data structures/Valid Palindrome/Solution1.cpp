class Solution {
public:
    bool isPalindrome(string s) {
        string ss = "";
        for(int k = 0 ; k < s.size() ; k++){
            if('a' <= s[k] && s[k] <= 'z' )
                ss += s[k];
            else if('A' <= s[k] && s[k] <= 'Z')
                ss += (char) (s[k] + 32);
            else if('0' <= s[k] && s[k] <= '9')
                ss += s[k];
        }
        //cout<<ss<<endl;
        int i = 0 , j = (int)ss.size() - 1;
        while(i < j){
            if(ss[i++] != ss[j--])
                return false;
        }
        return true;
    }
};

//solution link:https://leetcode.com/submissions/detail/501697148/
