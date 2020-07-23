class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res=0;
        vector<int> count(26);
        for(auto &c:chars)
        {
            ++count[c-'a'];
        }
        for(auto &word:words)
        {
            vector<int> count1=count;
            bool match = true;
            for(auto &ch :word)
            {
                if(--count1[ch-'a']<0)
                {
                    match = false;
                    break;
                }
            }
            if(match) res+=word.size();
        }
        return res;
        
    }
};