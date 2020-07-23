class Solution {
public:
    string sortString(string s) {
        int char_counter[26]={0};
        for(auto &c:s) ++char_counter[c-'a'];
        int count = 0;
        
        while(count<s.size())
        {
          for(int i=0;i<26;i++)
          {
              if(char_counter[i]-->0) s[count++]=i+'a';
          }
            for(int i=26-1;i>=0;i--)
            {
                if(char_counter[i]-->0) s[count++]=i+'a';
            }
        }
        return s;
        
    }
};