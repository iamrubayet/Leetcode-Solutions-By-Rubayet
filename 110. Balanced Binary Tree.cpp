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
    bool ans;
    bool isBalanced(TreeNode* root) {
        ans = true;
        int temp = checkbalance(root);
        return ans;
        
    }
    
    int checkbalance(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        
        if(!ans)
        {
            return 0;
        }
        int leftsubtree = checkbalance(root->left);
        int rightsubtree = checkbalance(root->right);
        
        if(abs(leftsubtree-rightsubtree) > 1)
        {
            ans = false;
        }
        return 1+ max(leftsubtree,rightsubtree);
        
    }
};