class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
       
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        
        int n = nums1.size() , m = nums2.size();
        int l = 0 , r = 0;
        
        while(l < n && r < m){
            int lef = nums1[l] , rig = nums2[r];
            if(lef == rig){
                ans.push_back(lef); 
                while( l < n && lef == nums1[l]) l++;
                while(r < m && rig == nums2[r]) r++;
                continue;
            }
            if(rig > lef){
                while( l < n && lef == nums1[l]) l++;
            }else{
                while(r < m && rig == nums2[r]) r++;
            }
        }
        
        
        return ans;
} };
