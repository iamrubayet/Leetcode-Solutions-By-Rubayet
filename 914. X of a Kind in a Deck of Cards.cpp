class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;
        int res = 0;
        for(int i:deck) mp[i]++;
        for(auto i:mp) res =__gcd(i.second,res);
        return res > 1;
        
    }
};