class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> srt ;
        int i = 0  , j = 0;
        while(i + j < n + m){
            if(i == m){
                srt.push_back(nums2[j++]);
            }else if(j == n){
                srt.push_back(nums1[i++]);
            }else{
                if(nums1[i] < nums2[j]){
                     srt.push_back(nums1[i++]);
                }else{
                     srt.push_back(nums2[j++]);
                }
            }
        }
        nums1 = srt;
    }
};
