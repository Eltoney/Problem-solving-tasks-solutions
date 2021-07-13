class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int ans = 0;
        map<char, int> mp;
        mp.insert({'I' , 1});
        mp.insert({'V' , 5});
        mp.insert({'X' , 10});
        mp.insert({'L' , 50});
        mp.insert({'C' , 100});
        mp.insert({'D' , 500});
        mp.insert({'M' , 1000});
        for(int i = 0 ; i < n ;i++){
            if(i == n - 1){
                ans += mp[s[i]];
                break;
            }
            if(mp[s[i]] < mp[s[i + 1]]){
                ans += mp[s[i + 1]] - mp[s[i]];
                i++;
            }else{
                ans += mp[s[i]];
            }
        
        }
        return ans;
        
    }
};
