class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index =0;
        for(int i:nums)
        {
            if(i!=val)
            {
                nums[index++]=i;
            }
        }
        return index;
        
    }
};