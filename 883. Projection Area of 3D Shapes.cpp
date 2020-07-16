class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int N = grid.size();
        int ans =0;
        
        for(int i=0;i<N;i++)
        {
            int bestrow = 0;
            int bestcol = 0;
            for(int j=0;j<N;j++)
            {
                if(grid[i][j]>0) ans++; //top shadow
                bestrow = max(bestrow,grid[i][j]);
                bestcol = max(bestcol,grid[j][i]);
            }
            ans += bestrow+bestcol;
        }
        return ans;
        
    }
};