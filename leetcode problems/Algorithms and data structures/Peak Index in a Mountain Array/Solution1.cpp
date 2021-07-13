class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int mx = -1 , mxId = -1;
        int length = (int)arr.size();
        for(int i = 0 ; i < length; i++){
            if(arr[i] > mx){
                mx = arr[i]  , mxId = i;
            }
        }
        return mxId;
    }
};


