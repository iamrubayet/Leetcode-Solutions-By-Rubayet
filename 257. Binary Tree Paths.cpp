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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if(root==NULL)
        {
            return result;
        }
        string current_path = to_string(root->val);
        if(root->left ==NULL && root->right ==NULL)
        {
            result.push_back(current_path);
        }
        if(root->left !=NULL)
        {
            dfs(root->left,current_path,result);
        }
        if(root->right !=NULL)
        {
            dfs(root->right,current_path,result);
        }
        return result;
        
    }
    void dfs(TreeNode* node,string current_path,vector<string>& result)
    {
        current_path += "->"+to_string(node->val);
        if(node->left ==NULL && node->right==NULL)
        {
            result.push_back(current_path);
            return;
        }
        if(node->left!=NULL)
        {
            dfs(node->left,current_path,result);
        }
        if(node->right!=NULL)
        {
            dfs(node->right,current_path,result);
        }
    }
};