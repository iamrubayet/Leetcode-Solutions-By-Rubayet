class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int ans = nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++)
        {
            ans =__gcd(ans,nums[i]);
        }
        return ans==1;

        
    }
};