class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,1);
        
        int rp = 1;
        
        for(int i=0;i<n;i++)
        {
            result[i]=rp;
            rp = rp*nums[i];
        }
        
        rp=1;
        
        for(int i=n-1;i>=0;i--)
        {
            result[i]=result[i]*rp;
            rp = rp*nums[i];
        }
        
        return result;
        
    }
};