class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        vector<int> res(n);
        
        for(int i=0;candies > 0;i++)
        {
            res[i%n] += min(candies,i+1);
            candies -= i+1;
        }
        return res;
        
        
    }
};