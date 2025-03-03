class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        unordered_map<int,int> prevmap; //value->index

        for(int i=0;i<n;i++)
        {
            int diff = target - nums[i];
            if(prevmap.find(diff) != prevmap.end())
            {
                return {prevmap[diff],i};
            }
            prevmap[nums[i]]=i;
        }
        return {};
        
    }
};