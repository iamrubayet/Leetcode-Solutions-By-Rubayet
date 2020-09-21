class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        auto f = [](string& w)
        {
            return count(w.begin(),w.end(),*min_element(w.begin(),w.end()));
        };
        
        
        vector<int> counter(11,0);
        for(string w : words )
            counter[f(w)-1]++;
        
        
        for(int i=counter.size()-2;i>=0;i--)
        {
            counter[i] += counter[i+1];
        }
        
        vector<int> res(queries.size());
        
        for(int i=0;i<queries.size();i++)
        {
            res[i] = counter[f(queries[i])];
        }
        return res;
        
    }
};