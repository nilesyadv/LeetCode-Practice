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
        queue<TreeNode*> q1;
        if(root) q1.push(root);
        
        while(true)
        {
            if(q1.empty()) break;
            queue<TreeNode*> q2;
            while(!q1.empty()) {q2.push(q1.front()); q1.pop();}
            vector<int> v;
            while(!q2.empty())
            {
                if(q2.front()->left) q1.push(q2.front()->left);
                if(q2.front()->right) q1.push(q2.front()->right);
                v.push_back(q2.front()->val);
                q2.pop();
            }
            ans.push_back(v);  
        }
        return ans;
    }
};