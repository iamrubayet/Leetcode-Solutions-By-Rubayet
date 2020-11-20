class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        vector<int> l;
        int times = 32;
        
        while(times >0)
        {
            int t = n & 1;
            l.push_back(t);
            n = n >> 1;
            times-=1;
        }
        
         uint32_t res = 0;
        
        for(int i=0;i <l.size();i++)
        {
            res = res << 1;
            
            res = res | l[i];
        }
        return res;
        
    }
};