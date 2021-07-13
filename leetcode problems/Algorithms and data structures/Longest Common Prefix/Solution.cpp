class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string str = "";
        bool done = 0;
        for(int i = 0 ; i < 200 && !done; i++){
            set<char> st;
            for(int j = 0 ; j < strs.size() && !done; j++){
                if(strs[j].size() <= i){
                    done = 1;
                    break;
                }
                st.insert(strs[j][i]);
            }
            if(done)
                break;
            if(st.size() != 1) 
                done = 1;
            else
                str += *st.begin();
        }
        return str;
    }
};
