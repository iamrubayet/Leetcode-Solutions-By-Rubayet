class Solution {
public:
    int minStartValue(vector<int>& nums) {
        auto sum = 0;
        auto min_sum = 0;
        for(auto n:nums)
        {
            sum += n;
            min_sum  = min(sum,min_sum);
        }
        return 1-min_sum;
        
    }
};