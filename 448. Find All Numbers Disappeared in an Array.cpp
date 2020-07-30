class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missingNumbers;
        unordered_set<int> st;
        for(int i:nums)
        {
          st.insert(i);  
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(!st.count(i))
            {
                missingNumbers.push_back(i);
            }
        }
        return missingNumbers;
        
    }
};