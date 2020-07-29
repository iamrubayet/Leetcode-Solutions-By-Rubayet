class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> numset;
        for(auto &num : nums)
        {
            numset.insert(num);
        }
        int expected = nums.size()+1;
        for(int i=0;i<expected;i++)
        {
            if(!numset.count(i))
            {
                return i;
            }
        }
        return -1;
        
    }
};