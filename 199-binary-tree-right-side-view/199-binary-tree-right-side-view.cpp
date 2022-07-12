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
    void RRL(TreeNode* root, int currLevel, vector<int> &ans)
    {
        if(root==NULL) return;
        
        if(ans.size()==currLevel) ans.push_back(root->val);
        RRL(root->right, currLevel+1, ans);
        RRL(root->left, currLevel+1, ans);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int cntLevel=0;
        RRL(root,0,ans);
        return ans;
    }
};