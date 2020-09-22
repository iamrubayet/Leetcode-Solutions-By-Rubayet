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
    int ans;
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 1;
        depth(root);
        return ans -1;
        
        
    }
    int depth(TreeNode* node)
    {
        if(node==NULL) return 0;
        int l = depth(node->left);
        int r = depth(node->right);
        ans = max(ans,l+r+1);
        return max(l,r)+1;
    }
};