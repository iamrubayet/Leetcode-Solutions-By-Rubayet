class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int temp=0;
        int numberofdigits=0;
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
           numberofdigits=0;
           temp=nums[i];
            while(temp)
            {
              numberofdigits++;
              temp/=10;
            }
            if(numberofdigits%2==0)
            {
                result++;
            }
        }
        return result;
    }
};