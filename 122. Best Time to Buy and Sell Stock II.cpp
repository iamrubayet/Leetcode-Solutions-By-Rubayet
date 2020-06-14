class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        int profit=0;
        if(len==0 || len==1){
            return 0;
        }
        for(int i=0;i<len-1;i++){
            if(prices[i+1]>prices[i]){
                profit+=prices[i+1]-prices[i];
            }
        }
        return profit;
        
    }
};