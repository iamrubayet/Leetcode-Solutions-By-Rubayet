class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        
        int i=0;
        int j = numbers.size()-1;
        
        while(i<j)
        {
            int sum = numbers[i]+numbers[j];
            
            if(sum > target)
            {
                j--;
            }
            else if(sum < target)
            {
                i++;
            }
            else 
            {
                result.push_back(i+1);
                result.push_back(j+1);
                break;
            }
        }
        
        return result;
        
    }
};