class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles;
        
        
        while(numBottles >= numExchange)
        {
          int remain = numBottles % numExchange;
          int newfull = numBottles  / numExchange;
          res += newfull;
          numBottles = remain + newfull;
        }
        
        
        
        
        return res;
        
    }
};