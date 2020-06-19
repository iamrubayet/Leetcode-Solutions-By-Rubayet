class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result;
        for(int i=0;i<=num;i++) {
        int count=0;
        int n=i;
            while(n){
                count++;
                n = n & (n-1);
            }
            result.push_back(count);
        }
        
        return result;
        
    }
};