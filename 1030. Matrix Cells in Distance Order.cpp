class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>> res;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                res.push_back({i,j,abs(i-r0)+abs(j-c0)});
            }
        }
        sort(res.begin(),res.end(),[](vector<int>& c1,vector<int>& c2){
            return c1[2] < c2[2];
        });
        for(vector<int> &d:res)
        {
            d.pop_back();
        }
        
        
        
        
        
        
        return res;
        
    }
};