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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        int levelTarget = depth - 1;
        if(levelTarget == 0){
            TreeNode* newNode = new TreeNode(val);
            newNode -> left = root;
            return newNode;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int n = q.size();
            level++;
            for(int i = 1; i <= n; i++){
                if(level == levelTarget){
                    TreeNode *newleft = new TreeNode(val), *newright = new TreeNode(val);
                    newleft -> left = q.front() -> left;
                    newright -> right = q.front() -> right;
                    q.front() -> left = newleft;
                    q.front() -> right = newright;
                }
                if(q.front() -> left) q.push(q.front() -> left);
                if(q.front() -> right) q.push(q.front() -> right);
                q.pop();
            }
            if(level == levelTarget) break;
        }
        return root;
        
    }
};