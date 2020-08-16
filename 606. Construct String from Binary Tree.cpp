class Solution {
public:
    string tree2str(TreeNode* t) {
        return helper(t);
    }
    
    string helper(TreeNode* t) {
        if (t == NULL) {
            return "";
        }
        string s = std::to_string(t->val);
        if (t->left != NULL || t->right != NULL) {
            s += "(" + helper(t->left) + ")";
            if (t->right != NULL) {
                s += "(" + helper(t->right) + ")";
            }            
        }
        
        return s;
    }
};