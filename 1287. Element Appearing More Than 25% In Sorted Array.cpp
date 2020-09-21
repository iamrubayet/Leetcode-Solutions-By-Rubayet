class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> mp;
        
        for(auto x : arr)
        {
            mp[x]++;
        }
        
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            if((arr.size()*0.25)<= it->second) return it->first;
        }
        return 0;
        
    }
};