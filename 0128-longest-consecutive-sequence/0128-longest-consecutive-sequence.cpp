class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int ans = 0;
        
        for(int i=0;i<nums.size();i++ )
        {
            if(s.find(nums[i]-1) != s.end())
            {
                continue;
            }
            else {
                int cnt=0;
                int current = nums[i];
                while(s.find(current)!=s.end())
                {
                    cnt++;
                    current++;
                }
                ans = max(ans,cnt);
            }
        }
        
        return ans;
        
        
        
        
    }
};