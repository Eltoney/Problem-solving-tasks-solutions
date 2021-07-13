class Solution {
public:
    map<char , bool> isJewels;
    int numJewelsInStones(string jewels, string stones) {
        int jewLength = jewels.size();
        for(int i = 0 ; i  < jewLength ; i++){
            isJewels[jewels[i] ] = 1;
        }
        
        int ans = 0;
        
        int stonLength = stones.size();
        
        for(int i = 0 ; i < stonLength ; i++){
            if(isJewels[stones[i]])
                ans++;
        }
        return ans;
    }
};

//submission link: https://leetcode.com/submissions/detail/501653304/
