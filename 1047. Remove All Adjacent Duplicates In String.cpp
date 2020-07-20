class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> stk;
        string ans = "";
        for(auto curr:S)
        {
            if(stk.empty()) stk.push(curr);
            else if(stk.top()==curr) stk.pop();
            else stk.push(curr);
        }
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};