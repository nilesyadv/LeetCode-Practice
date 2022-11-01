/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //if(root == NULL) return NULL;
        if(root -> val == p -> val || root -> val == q -> val) return root;
        if(root -> left == NULL && root -> right == NULL) return NULL;
        TreeNode *temp1 = NULL, *temp2 = NULL;
        if(root -> left) temp1 = lowestCommonAncestor(root -> left, p, q);
        if(root -> right) temp2 = lowestCommonAncestor(root -> right, p, q);
        if(temp1 && temp2) return root;
        if(temp1 == NULL) return temp2;
        return temp1;  
    }
};