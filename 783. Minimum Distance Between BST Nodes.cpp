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
    int minDiffInBST(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        int min = INT_MAX;
        
        for(int i=0;i<v.size()-1;i++)
        {
            int m = abs(v[i]-v[i+1]);
            if(m<min)
            {
                min = m;
            }
        }
        return min;
        
    }
    
    void inorder(TreeNode* root, vector<int> &v)
    {
        if(root == NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
};