class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int res = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0) continue;
                res += grid[i][j]*6 - 2*(grid[i][j]-1);
                if(i<n-1) res-=2*min(grid[i][j],grid[i+1][j]);
                if(j<n-1) res -=2*min(grid[i][j],grid[i][j+1]);
            }
        }
        return res;
        
    }
};