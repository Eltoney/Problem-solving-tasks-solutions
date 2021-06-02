class Solution {
public:
    char isAlphaNumeric(char x){
        if('a' <= x && x <= 'z' )
               return  x;
        else if('A' <= x && x <= 'Z')
               return  ((char) (x + 32));
        else if('0' <= x && x <= '9')
                return  x;
        
        return '?';
    }
    
    bool isPalindrome(string s) {
       int i = 0 , j = (int)s.size() - 1;
        while(i < j){
            char x = isAlphaNumeric(s[i]);
            while(x == '?' && i < j){
                i++;
                x = isAlphaNumeric(s[i]);
            }
            
            char y = isAlphaNumeric(s[j]);
            while(y == '?' && i < j){
                j--;
                y = isAlphaNumeric(s[j]);
            }
            //cout<<x<< " " <<y <<endl;
            if(x != y)
                return false;
            i++ , j--;
        }
        return true;
    }
};

//submission link:https://leetcode.com/submissions/detail/501701718/
