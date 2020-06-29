class Solution {
public:
    int balancedStringSplit(string s) {
        int balancedString = 0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                count++;
            }
            else if(s[i]=='R')
            {
               count--; 
            }
            if(count==0)
            {
              balancedString++;  
            }
        }
        return balancedString;
        
    }
};