class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()==0) return true;
        
        
        int s_pointer = 0;
        int t_pointer = 0;
        while(t_pointer < t.length())
        {
            if(t[t_pointer]==s[s_pointer])
            {
                s_pointer++;
                
                if(s_pointer==s.length()) return true;
                
            }
            t_pointer++;
        }
        return false;
        
    }
};