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
    bool CheckIfValid(TreeNode* root, long long left, long long right)
    {
        if(root == NULL) return true;
        if(root -> val < left || root -> val > right) return false;
        return CheckIfValid(root -> left, left, root -> val - 1LL) && CheckIfValid(root -> right, root -> val + 1LL, right);
    }
public:
    bool isValidBST(TreeNode* root) {
        
        long long left = -2147483648LL, right = 2147483647LL;
        return CheckIfValid(root -> left, left, root -> val - 1LL) && CheckIfValid(root -> right, root -> val + 1LL, right);
    }
};