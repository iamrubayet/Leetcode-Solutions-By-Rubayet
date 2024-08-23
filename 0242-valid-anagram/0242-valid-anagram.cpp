class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
        {
            return false;
        }
        
        unordered_map<char,int> charfreq;
        
        for(int i=0;i<s.size();i++)
        {
            charfreq[s[i]]++;
            charfreq[t[i]]--;
            
        }
        
        for(const auto& count : charfreq)
        {
            if ( count.second != 0)
            {
                return false;
            }
        }
        return true;
        
    }
};