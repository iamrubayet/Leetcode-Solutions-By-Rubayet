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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root==NULL)
        {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> currentlevel;
            for(int i=0;i<size;i++)
            {
                TreeNode* current = q.front();
                q.pop();
                currentlevel.push_back(current->val);
                if(current->left!=NULL)
                {
                    q.push(current->left);
                }
                if(current->right!=NULL)
                {
                    q.push(current->right);
                }
                
            }
            result.push_back(currentlevel);
        }
        return result;
    }
};