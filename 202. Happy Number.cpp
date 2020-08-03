class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1)
        {
            int current = n;
            int sum = 0;
            while(current !=0)
            {
                sum += (current%10)*(current%10);
                current /=10;
            }
            if(seen.count(sum))
            {
                return false;
            }
            seen.insert(sum);
            n = sum;
            
        }
        return true;
        
    }
};