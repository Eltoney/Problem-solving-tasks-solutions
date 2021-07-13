class Solution {
public:
    void reverseString(vector<char>& s) {
        int length = s.size();
        for(int i = 0 , j = length - 1  ; i < j ; i++ , j--){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        } 
       
    }
};

//submission link: https://leetcode.com/submissions/detail/501692066/
