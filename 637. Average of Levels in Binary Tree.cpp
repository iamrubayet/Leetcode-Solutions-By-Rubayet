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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if(root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        double level_sum = 0;
        while(!q.empty())
        {
            level_sum = 0;
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* current = q.front();
                q.pop();
                level_sum +=current->val;
                if(current->left!=NULL) q.push(current->left);
                if(current->right!=NULL ) q.push(current->right);
            }
            double level_avg = (level_sum/size);
            res.push_back(level_avg);
        }
        return res;
        
        
    }
};