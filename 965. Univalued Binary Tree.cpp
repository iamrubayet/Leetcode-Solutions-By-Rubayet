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
    vector<int> vals;
    bool isUnivalTree(TreeNode* root) {
        dfs(root);
        for(auto v:vals)
            if(v!=vals[0])
                return false;
        return true;
        
    }
    void dfs(TreeNode* node)
    {
        if(node!=NULL)
        {
            vals.push_back(node->val);
            dfs(node->left);
            dfs(node->right);
            
        }
            
    }
};