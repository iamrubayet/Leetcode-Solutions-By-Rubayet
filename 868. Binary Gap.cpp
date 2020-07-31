class Solution {
public:
    int binaryGap(int N) {
        int a[32];
        int t=0;
        for(int i=0;i<32;i++)
        {
            if(((N>>i)&1)!=0)
            {
                a[t++]=i;
            }
        }
        int ans = 0;
        for(int i=0;i<t-1;i++)
        {
            ans = max(ans,a[i+1]-a[i]);
        }
        return ans;
        
    }
};