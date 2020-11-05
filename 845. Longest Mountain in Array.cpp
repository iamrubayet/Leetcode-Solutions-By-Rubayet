class Solution {
public:
    int longestMountain(vector<int>& A) {
        
        int inc = 0;
        
        int dec = 0;
        
        int ans = 0;
        
        for(int i=1;i< A.size();i++)
        {
            if(dec && A[i] > A[i-1] || A[i]==A[i-1])
            {
                dec = inc = 0;
            }
            inc += A[i]>A[i-1];
            dec += A[i]<A[i-1];
            
            if(dec && inc)
            {
                ans = max(ans,dec+inc+1);
            }
        }
        return ans >=3 ? ans:0;
        
    }
};