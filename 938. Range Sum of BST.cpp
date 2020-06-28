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
    int answer;
public:
    int rangeSumBST(TreeNode* root, int L, int R) 
    {
        answer=0;
        dfs(root,L,R);
        return answer;
        
    }
    void dfs(TreeNode* node,int L,int R)
    {
        if(node!=NULL){
            if(node->val>=L && node->val <=R)
            {
                answer=answer+node->val;
            }
            if (node->val>L)
            {
                dfs(node->left,L,R);
            }
            if(node->val<R)
            {
                dfs(node->right,L,R);
            }
        }
        
        
    }
    
    
    
    
};