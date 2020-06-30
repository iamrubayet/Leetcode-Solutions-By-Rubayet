class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x^y;
        int count=0;
        if(x==0 && y==0){
            return 0;
        }
        while(z)
        {
          z = z&(z-1);
          count++;
        }
        return count;
        
    }
};