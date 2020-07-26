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
    int sumRootToLeaf(TreeNode* root,int val = 0) {
        if(root==NULL)
        {
            return 0;
        }
        val = (val*2+root->val);

        if(root->left==NULL && root->right==NULL)
        {
            return val;
        }
        return sumRootToLeaf(root->left,val)+sumRootToLeaf(root->right,val);
        
    }
};