class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int lo=0;
        int high=numbers.size()-1;
        while(lo<high)
        {
            if(numbers[lo]+numbers[high]==target)
            {
                res.push_back(lo+1);
                res.push_back(high+1);
                return res;
            }
            else if(numbers[lo]+numbers[high]>target)
            {
                high--;
            }
            else
            {
                lo++;
            }
        }
        return res;
        
    }
};