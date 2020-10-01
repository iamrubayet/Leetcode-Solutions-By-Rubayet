class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int rsum[rows];
        int csum[cols];
        
        // getting the sum of the rows
        
        for(int i=0;i<rows;i++)
        {
            rsum[i] = 0;
            for(int j=0;j<cols;j++)
            {
                rsum[i] += mat[i][j];
            }
        }
        
        // getting the sum of the colimns
        
        for(int i=0;i<cols;i++)
        {
            csum[i]=0;
            for(int j=0;j<rows;j++)
            {
                csum[i] += mat[j][i];
            }
        }
        
        //count the number of 1 
        int count = 0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(mat[i][j]==1 && rsum[i]==1 && csum[j]==1)
                {
                    count++;
                }
            }
        }
        return count;
        
    }
};