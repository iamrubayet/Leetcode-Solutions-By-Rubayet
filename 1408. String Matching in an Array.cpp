class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        for(auto i : words)
        {
            for(auto j : words)
            {
                if(i!=j && j.find(i)!=-1)
                {
                    res.push_back(i);
                    break;
                    
                }
            }
        }
        return res;
    }
};