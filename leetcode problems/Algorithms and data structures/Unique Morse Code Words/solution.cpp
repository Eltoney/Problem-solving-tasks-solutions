class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> table = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> st;
        
        for(int i = 0 ; i < words.size() ; i++){
            string cur = "";
            for(int j = 0 ; j < words[i].size() ; j++){
                cur += table[words[i][j] - 'a'];
            }
            st.insert(cur);
        }
        return st.size();
        
    }
};
