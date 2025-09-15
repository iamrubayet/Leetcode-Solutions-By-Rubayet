class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> targetmap;

        for(int i=0;i<n;i++)
        {
            int diff = target-nums[i];
            if(targetmap.find(diff)!=targetmap.end())
            {
                return {targetmap[diff],i};
            }
            targetmap.insert({nums[i],i});
        }
        return {};




        
    }
};