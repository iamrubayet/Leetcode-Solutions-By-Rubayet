class Solution {
public:
    int maxPower(string s) {
        int ans = INT_MIN ;
        int count = 1;
        
        for(int i=0;i<s.length();i++)
        {
            if(i+1 < s.length() && s[i]==s[i+1])
            {
                count++;
                
            }
            else
            {
                ans = max(count,ans);

                count = 1;
            }
        }
        return ans;
        
    }
};