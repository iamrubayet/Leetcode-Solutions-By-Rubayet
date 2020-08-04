class Solution {
public:
    int findLucky(vector<int>& arr) {
        int mp[501]={};
        for(auto n:arr)
        {
            mp[n]++;
        }
        for(auto n=arr.size();n>0;n--)
        {
            if(n==mp[n])
            {
                return n;
            }
        }
        return -1;

        
    }
};