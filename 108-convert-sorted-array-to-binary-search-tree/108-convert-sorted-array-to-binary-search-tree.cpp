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
    TreeNode* heightBalancedBST(int start, int end, vector<int>& nums){
        
        if(start > end) return NULL;
        int middle = (start + end) / 2;
        
        TreeNode* root = new TreeNode(nums[middle]);
        root -> left = heightBalancedBST(start, middle - 1, nums);
        root -> right = heightBalancedBST(middle + 1, end, nums);
        
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return heightBalancedBST(0,nums.size()-1,nums);
    }
};