class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
         if (rec1[0] == rec1[2] || rec1[1] == rec1[3] ||
            rec2[0] == rec2[2] || rec2[1] == rec2[3]) {
            // the line cannot have positive overlap
            return false;
        }

        return !(rec1[2] <= rec2[0] ||   // left
                 rec1[3] <= rec2[1] ||   // bottom
                 rec1[0] >= rec2[2] ||   // right
                 rec1[1] >= rec2[3]);    // top
    
}
    
    
};

//submission link: https://leetcode.com/submissions/detail/501660108/
