class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //count zeros
        int numzeros=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                numzeros++;
                
            }
        }
        //retain all the nonzero element in the respective position
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
           if(nums[i]!=0)
           {
               ans.push_back(nums[i]);
           } 
        }
        //move all the zeros to end 
        while(numzeros--)
        {
            ans.push_back(0);
        }
        //combine all the parts
        for(int i=0;i<n;i++)
        {
            nums[i]=ans[i];
        }
        
        
    }
};