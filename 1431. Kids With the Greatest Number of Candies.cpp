class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int a = 0;
        vector <bool> result;
        for (int x: candies){
            a = max(a,x);
        }
        for(int i=0;i<candies.size();i++){
            
            if(candies[i]+extraCandies>=a){
                
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
        
    }
};