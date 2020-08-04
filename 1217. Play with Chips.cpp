class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int cnt[2]={};
        for(auto p:chips)
        {
            ++cnt[p%2];
        }
        return min(cnt[0],cnt[1]);
        
    }
};