class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<m;j++)
            {
                count+=mat[i][j];
            }
            a.emplace_back(count,i);
        }
        sort(a.begin(),a.end());
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
           ans.push_back(a[i].second); 
        }
        return ans;
    }
};