class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> stk;
        int ans =0;
        for(string op:ops)
        {
            if(op=="C")
            {
                ans -= stk.top();
                stk.pop();
            }
            else if(op=="D")
            {
               stk.push(stk.top()*2);
               ans += stk.top();
            }
            else if(op=="+")
            {
              int a=stk.top();
              stk.pop();
              int b = stk.top();
              int d = a+b;
              stk.push(a);
              ans+= d;
              stk.push(d);
              
            }
            else
            {
                int n = stoi(op);
                ans +=n;
                stk.push(n);
            }
        }
        return ans;
        
    }
};