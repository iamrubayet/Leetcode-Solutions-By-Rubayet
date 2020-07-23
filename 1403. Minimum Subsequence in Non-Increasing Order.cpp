class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum=0;
        int newsum=0;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        sort(nums.begin(),nums.end(),std::greater<>());
        for(int i=0;i<nums.size();i++)
        {
            newsum+=nums[i];
            sum = sum-nums[i];
            res.push_back(nums[i]);
            if(newsum>sum)
            {
                break;
            }
        }
        sort(res.begin(),res.end(),std::greater<>());
        return res;
        
    }
};