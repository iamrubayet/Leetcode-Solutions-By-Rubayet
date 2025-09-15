class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string,vector<string>> stringmp;
        // int n = strs.size();
        // string temp;

        // for(int i=0;i<n;i++)
        // {
        //     temp=strs[i];
        //     sort(strs[i].begin(),strs[i].end());
        //     stringmp[strs[i]].push_back(temp);

        // }

        // vector<vector<string>> result;

        // for(auto itr=stringmp.begin();itr!=stringmp.end();++itr)
        // {
        //     result.push_back(itr->second);

        // }

        // return result;

        unordered_map<string,vector<string>> stringmap;
        int n=strs.size();
        string temp;

        for(int i=0;i<n;i++)
        {
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            stringmap[strs[i]].push_back(temp);
        }

        vector<vector<string>> res;

        for(auto itr=stringmap.begin();itr!=stringmap.end();itr++)
        {
            res.push_back(itr->second);

        }


        return res;


        
    }
};