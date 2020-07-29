class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        istringstream combined(A+" "+B);
        
        string word;
        
        unordered_map<string,int> counts;
        
        while(getline(combined,word,' '))
        {
            counts[word]+=1;
            
        }
        vector<string> result;
        

        for(auto &p:counts)
        {
            if(p.second==1)
            {
                result.push_back(p.first);
            }
        }
        return result;
        
    }
};