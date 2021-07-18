class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i = 0 ; i < command.size() ; i++){
            if(command[i] == 'G'){
                ans += 'G';
            }else{
                if(command[i + 1]  == ')'){
                    ans += 'o';
                    i++;
                }else{
                    ans += 'a';
                    ans += 'l';
                    i += 3;
                }
            }
        }
        return ans;
    }
};
