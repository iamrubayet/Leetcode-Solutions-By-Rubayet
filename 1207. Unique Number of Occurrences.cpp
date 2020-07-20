class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(auto &i:arr) m[i]++;
        for(auto &i:m) s.insert(i.second);
        return size(s) == size(m);
        
        
    }
};