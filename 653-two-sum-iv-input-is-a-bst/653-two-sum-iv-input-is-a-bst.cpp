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
    unordered_map<int, int> m;
public:
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL) return false;
        if(m[k - (root -> val)]) return true;
        m[root -> val]++;
        return (findTarget(root -> left, k) || findTarget(root -> right, k));
    }
};