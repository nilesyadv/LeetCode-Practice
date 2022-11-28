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
    bool helper(TreeNode* root, long long left, long long right)
    {
        if(root == NULL) return true;
        bool flag = false;
        if(root -> val > left && root -> val < right) flag = true;
        return flag && (helper(root -> left, left, root -> val) && helper(root -> right, root -> val, right));
    }
public:
    bool isValidBST(TreeNode* root) {
        //cout<<INT_MIN<<" "<<INT_MAX<<endl;
        long long left = INT_MIN-1LL, right = INT_MAX+1LL;
        return helper(root, left, right);
    }
};