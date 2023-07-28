class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<string> ust;
        
        for(int i=0;i<9;i++)
        {
             for(int j=0;j<9;j++)
             {
                 if (board[i][j] == '.')
                 {
                     continue;
                 }
                 
                 string row = to_string(board[i][j]) + "ROW" + to_string(i);
                 string col = to_string(board[i][j]) + "COL" + to_string(j);
                 string box = to_string(board[i][j]) + "BOX" + to_string(i/3) + "_" + to_string(j/3);
                 
                 if(ust.count(row) || ust.count(col) || ust.count(box))
                 {
                     return false;
                 }
                 
                 ust.insert(row);
                 ust.insert(col);
                 ust.insert(box);
                 
             }
        }
        
        return true;
        
        
    }
};