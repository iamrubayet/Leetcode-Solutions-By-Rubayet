class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> a;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
          for(int j=0;j<nums.size();j++)
          {
              if(nums[i]>nums[j])
              {
                count++; 
              }
          }
            a.push_back(count);
            count = 0;
        }
        return a;
        
    }
};