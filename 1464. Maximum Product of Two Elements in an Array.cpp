class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int notmax=0;
        int maximum=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
            notmax=(nums[i]-1)*(nums[j]-1);
            maximum = max(maximum,notmax);
            }
            
        }
        return maximum;
        
    }
};