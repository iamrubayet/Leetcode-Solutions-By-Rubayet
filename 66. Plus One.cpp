class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
              digits[i]=0;  
            }
            
            
        }
        vector<int> result(digits.size()+1);
        result[0]=1;
        return result;
        
    }
};