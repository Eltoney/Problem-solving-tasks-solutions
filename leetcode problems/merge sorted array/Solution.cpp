class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int curPos = m;
        int j = 0;
        while(curPos < nums1.size()){
            nums1[curPos] = nums2[j];
            int i = curPos;
            while(i > 0){
                if(nums1[i] < nums1[i - 1]){
                    swap(nums1[i] , nums1[i - 1]);
                    i--;
                }else{
                    break;
                }
            }
            
            curPos++ , j++;
        }
    }
};
