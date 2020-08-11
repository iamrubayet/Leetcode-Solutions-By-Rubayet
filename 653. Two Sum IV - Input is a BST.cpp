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
    bool findTarget(TreeNode* root, int k) {
        vector<int> list;
        inorder(root,list);
        int l =0;
        int r = list.size()-1;
        while(l<r)
        {
            int sum = list[l]+list[r];
            if(sum==k)
            {
                return true;
            }
            if(sum < k)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return false;
        
        
    }
    
    
    void inorder(TreeNode* root,vector<int>& list)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,list);
        list.push_back(root->val);
        inorder(root->right,list);
    }
};