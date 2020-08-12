class Solution {
public:
    string shortestCompletingWord(string s, vector<string>& words) {
        std::transform(s.begin(),s.end(),s.begin(), ::tolower);
        map<char,int> counts;
        int total = 0;
        for(char c:s)
        {
            if(isalpha(c))
            {
            counts[c]++;
            total++;
            }
        }
        string res;
        for(string w:words)
        {
            int n = total;
            map<char,int> cnts= counts;
            for(int i=0;i<w.size();i++)
                n -= cnts[w[i]]--> 0;
            if(n==0 && (res.empty() || w.size() < res.size()))
                res = w;
        }
        return res;
        
    }
};