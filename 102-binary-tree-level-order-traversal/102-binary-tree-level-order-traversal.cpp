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
            int size=q.size();
            vector<int> level;
            for(int i=1;i<=size;i++)
            {
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                level.push_back(q.front()->val);
                q.pop();
            }
            ans.push_back(level);  
        }
        return ans;
    }
};