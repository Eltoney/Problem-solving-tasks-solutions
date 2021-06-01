class Solution {
    vector<vector<int>> answer;
    int n , k;
public:
    
    void Backtrack(int first , vector<int> cur , vector<int> &nums){
        if(cur.size() == k){
            answer.push_back(cur);
            return ;
        }
        for(int i = first ; i < n ; i++){
            cur.push_back(nums[i]);
            Backtrack(i + 1 , cur , nums);
            cur.pop_back(); 
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        for(k = 0 ; k <= n ; ++k){
            vector<int> cur ;
            Backtrack(0 ,cur , nums);
        }
         return answer; 
    }
   
};

//submision link: https://leetcode.com/submissions/detail/501421885/
