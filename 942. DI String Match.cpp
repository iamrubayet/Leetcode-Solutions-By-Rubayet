class Solution {
public:
    vector<int> diStringMatch(string S) {
        int N=S.size();
        vector<int> a(N+1);
        int lo=0;
        int hi=N;
        for(int i=0;i<N;i++)
        {
          if(S[i]=='I')
          {
            a[i] = lo++;  
          }
            else
            {
              a[i]=hi--;  
            }
        }
        a[N]=lo;
        return a;
        
    }
};