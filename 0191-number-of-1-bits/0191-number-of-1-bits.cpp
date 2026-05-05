class Solution {
public:
    int hammingWeight(int n) {
        int result=0;
        while(n)
        {
            result += n % 2;
            n = n/2;
        }
        return result;
        
    }
};