class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result =0;
        int index =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                index++;
                result = max(result,index);
            }
            else
            {
                index=0;
            }
        }
        return result;
        
    }
};