class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<0){
            return false;
        }
        int count=0;
        while(n){
            count++;
            n = n & (n-1);
        }
        if (count==1){
            return true;
        }
        else{
            return false;
        }
        
    }
};