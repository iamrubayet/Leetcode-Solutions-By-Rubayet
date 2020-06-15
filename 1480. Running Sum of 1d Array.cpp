class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rsum;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            rsum.push_back(sum);
            
        }
        return rsum;
        
    }
};