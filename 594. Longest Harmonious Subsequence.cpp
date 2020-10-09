class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int max1 = 0;
        for(auto it = m.begin(); it != m.end(); it++)
        {
            auto it1 = m.find(it->first + 1);
            if(it1 != m.end())
            {
                max1 = max(max1, it->second + it1->second);
            }
            
        }
        
        return max1;
    }
};