class Solution {
public:
    bool hasAlternatingBits(int n) {
        int last = n%2;
        n>>=1;
        while(n>0)
        {
            int current = n%2;
            if(current == last)
            {
                return false;
            }
            last = current;
            n>>=1;
        }
        return true;
        
        
    }
};