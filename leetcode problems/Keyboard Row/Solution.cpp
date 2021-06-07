class Solution {
    bool inFirstRow(string str){
        string keyboard = "qwertyuiop";
        for(int i = 0 ; i < (int)str.size() ; i++){
             if(keyboard.find(tolower(str[i])) ==  string::npos ){
            return false;
        }
        }
        return true;
    }
    
     bool inSecondRow(string str){
        string keyboard = "asdfghjkl";
             for(int i = 0 ; i < (int)str.size() ; i++){
             if(keyboard.find(tolower(str[i])) ==  string::npos ){
            return false;
        }
        }
        return true;
    }
     bool inThirdRow(string str){
        string keyboard = "zxcvbnm";
             for(int i = 0 ; i < (int)str.size() ; i++){
             if(keyboard.find(tolower(str[i])) ==  string::npos ){
            return false;
        }
        }
        return true;
    }
    
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans ;
        for(int i = 0 ; i < (int)words.size() ; i++){
            if(inFirstRow(words[i]) || inSecondRow(words[i]) 
                    || inThirdRow(words[i])){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
