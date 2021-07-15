/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int ans = 0 , l , h;
    void dfs(TreeNode* node){
        if(node == nullptr){
            return;
        }
        if(l <= node -> val && node -> val <= h){
            ans+= node->val;
        }
        dfs(node -> right);
        dfs(node -> left);
    }
    
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        l = low , h = high;
        dfs(root);
        return ans;
    }
};
