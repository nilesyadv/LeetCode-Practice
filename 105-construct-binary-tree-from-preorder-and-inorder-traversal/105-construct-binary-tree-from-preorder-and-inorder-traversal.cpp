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
    map<int,int> m;
    TreeNode* BuildingTree(int index, vector<int>& preorder, vector<int>& inorder, int left, int right)
    {
        if(index==inorder.size()) return NULL;
        TreeNode* root = new TreeNode(preorder[index]);
        
        if(m[preorder[index]]-1 >= left) root->left = BuildingTree(index + 1, preorder, inorder, left, m[preorder[index]] - 1);
        else root->left = NULL;
        
        if(m[preorder[index]]+1 <= right) root->right = BuildingTree(index + m[preorder[index]] - left + 1, preorder, inorder, m[preorder[index]] +1, right);
        else root->right = NULL;
        
        return root;
        
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int n = inorder.size();
        for (int i = 0; i < n; i++) m[inorder[i]] = i;
        
        //TreeNode* root=new TreeNode(preorder[0]);
        // root->left = BuildingTree(root, 1, preorder, inorder, 0, m[inorder[root->val]]-1);
        // root->right = BuildingTree(root, 1, preorder, inorder, 0, m[inorder[root->val]]-1);
        // root->val=20;
        // cout<<root->val<<endl;
        return BuildingTree(0, preorder, inorder, 0, n-1);
    }
};