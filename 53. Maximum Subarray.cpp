class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int current_sum = max_sum;
        for(int i=1;i<nums.size();i++)
        {
            current_sum = max(nums[i],nums[i]+current_sum);
            max_sum = max(max_sum,current_sum);
        }
        return max_sum;
        
    }
};