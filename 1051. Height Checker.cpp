class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int res=0;
        vector<int> s=heights;
        sort(s.begin(),s.end());
        for(auto i=0;i<heights.size();i++)
        {
            if(s[i]!=heights[i])
            {
                res++;
            }
        }
        return res;
        
    }
};