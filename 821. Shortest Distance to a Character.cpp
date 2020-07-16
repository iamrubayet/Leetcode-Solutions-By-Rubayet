class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n = S.length();
        vector<int> res(n);
        int c_position = -n;
        for(int i=0;i<n;i++)
        {
            if(S[i]==C)
            {
             c_position = i;
            }
            res[i] = i-c_position;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(S[i]==C)
            {
             c_position = i;
            }
            res[i]= min(res[i],abs(i-c_position));
        }
        return res;
        
    }
};