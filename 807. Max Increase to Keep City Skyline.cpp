class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int result =0;
        
        vector<int> max_row_vals(grid.size(),INT_MIN);
        vector<int> max_col_vals(grid.size() ? grid[0].size() : 0, INT_MIN);
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                max_row_vals[i] = max(max_row_vals[i],grid[i][j]);
                max_col_vals[i] = max(max_col_vals[i],grid[j][i]);
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]< max_row_vals[i] && grid[i][j]<max_col_vals[j])
                {
                    result += min(max_row_vals[i]-grid[i][j],max_col_vals[j]-grid[i][j]);
                }
            }
        }
        
        
        
        return result;
        
    }
};