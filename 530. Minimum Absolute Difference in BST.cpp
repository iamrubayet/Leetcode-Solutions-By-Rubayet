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
    int getMinimumDifference(TreeNode* root) {
        int min_num = INT_MAX;
        TreeNode* n = NULL;
        help(root,min_num,n);
        return min_num;
        
    }
    void help(TreeNode* n,int& min_num,TreeNode* &prev_n)
    {
        if(n->left) help(n->left,min_num,prev_n);
        if(prev_n) min_num = min(min_num,abs(prev_n->val-n->val));
        prev_n=n;
        if(n->right) help(n->right,min_num,prev_n);
    }
};