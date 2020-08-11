class Solution {
public:
    int countBinarySubstrings(string s) {
        int result = 0;
        int prev = 0;
        int current = 1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                current++;
            }
            else
            {
                prev = current;
                current = 1;
            }
            if(current<=prev)
            {
                result++;
            }
        }
        return result;
        
        
    }
};