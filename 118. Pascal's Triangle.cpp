class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        if(numRows==0) return pascal;
        
        vector<int> first_row;
        first_row.push_back(1);
        pascal.push_back(first_row);
        
        for(int i=1;i<numRows;i++)
        {
            vector<int> prev_row = pascal.back();
            vector<int> curr_row;
            curr_row.push_back(1);
            for(int j=1;j<i;j++)
            {
                curr_row.push_back(prev_row[j-1]+prev_row[j]);
            }
            curr_row.push_back(1);
            pascal.push_back(curr_row);
        }
        return pascal;
        
        
    }
};