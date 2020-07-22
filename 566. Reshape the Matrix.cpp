class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int rows = nums.size();
        int columns = nums[0].size();
        if( (rows*columns)!= r*c) return nums;
        vector<vector<int>> res(r,vector<int>(c));
        int rows_num = 0;
        int columns_num = 0;
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                res[rows_num][columns_num]=nums[i][j];
                columns_num++;
                if(columns_num==c)
                {
                    columns_num = 0;
                    rows_num++;
                }
            }
                
                
            
        }
        return res;

    }
};