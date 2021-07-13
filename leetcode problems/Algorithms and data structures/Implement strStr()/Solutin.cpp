class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) 
            return 0;
        int hayLength = haystack.size();
        int nedLength = needle.size();
        
        for(int i = 0 ; (i + nedLength) <= hayLength ; i++){
            string cur = haystack.substr(i , nedLength);
            if(cur == needle)
                return i;
        }
        return -1;
    }
};
