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
    
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root) q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();
            vector<int> v;
            for(int i=0;i<n;i++)
            {
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                v.push_back(q.front()->val);
                q.pop();
            }
            ans.push_back(v);
        }
        
        return ans;
    }
};