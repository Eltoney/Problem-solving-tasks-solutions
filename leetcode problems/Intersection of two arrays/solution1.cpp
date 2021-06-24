class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, bool > inFirstSet;
        int i , n  = nums1.size();
        for(i = 0 ; i < nums1.size() ;i++){
            inFirstSet[nums1[i]] = 1;
        }
        n = nums2.size();
        for(i = 0 ; i < nums2.size() ;i++){
            if(inFirstSet[nums2[i]]){
                ans.push_back(nums2[i]);
                inFirstSet[nums2[i]] = 0;
            }
        }
        return ans;
} };
