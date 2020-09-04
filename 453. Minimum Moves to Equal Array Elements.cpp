class Solution {
public:
    int minMoves(vector<int>& nums) {
        return accumulate(nums.begin(), nums.end(), 0L) - nums.size() * *min_element(nums.begin(), nums.end());
    }
};