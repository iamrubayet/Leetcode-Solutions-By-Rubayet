/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> result;
        if(root==NULL)
        {
            return {};
        }
        stack<Node*> stk;
        stk.push(root);
        while(!stk.empty())
        {
            Node* curr= stk.top();
            stk.pop();
            for(int i=0;i<curr->children.size();i++) stk.push(curr->children[i]);
            result.push_back(curr->val);
               }
        reverse(result.begin(),result.end());
        return result;
        
    }
};