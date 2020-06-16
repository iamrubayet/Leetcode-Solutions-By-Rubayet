class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i==0){
                if(nums.size()==1 || nums[0]!=nums[1]){
                    return nums[0];
                }
            }
            else if(i==nums.size()-1){
                if(nums[i]!=nums[i-1]){
                    return nums[i];
                }
                
            }
            else{
                if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
                    return nums[i];
                }
            }
        }
        return -1;
        
    }
};