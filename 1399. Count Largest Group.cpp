class Solution {
public:
    int countLargestGroup(int n) {
        int cnt[37] = {} , mx = 0;
        for(auto i=1;i<=n;i++)
        {
            mx = max(mx,++cnt[dsum(i)]);
        }
        return count_if(begin(cnt),end(cnt),[&mx](int n){ return n == mx; });
        
    }
    
    int dsum(int n)
    {
        return n == 0 ? 0 : n%10 + dsum(n/10);
    }
};