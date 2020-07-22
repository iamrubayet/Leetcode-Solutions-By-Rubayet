class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int rookRow,rookCol;
        int numPawns=0;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='R')
                {
                rookRow=i;
                rookCol=j;
                break;
                }
            }
        }
        for(int i=rookRow;i>=0;i--)
        {
            if(board[i][rookCol]=='B')
            {
                break;
            }
            if(board[i][rookCol]=='p')
            {
                numPawns++;
                break;
            }
        }
        for(int i=rookRow;i<board.size();i++)
        {
            if(board[i][rookCol]=='B')
            {
                break;
            }
            if(board[i][rookCol]=='p')
            {
                numPawns++;
                break;
            }
        }
        
        for(int j=rookCol;j<board.size();j++)
        {
            if(board[rookRow][j]=='B')
            {
                break;
            }
            if(board[rookRow][j]=='p')
            {
                numPawns++;
                break;
            }
        }
        
        for(int j=rookCol;j>=0;j--)
        {
            if(board[rookRow][j]=='B')
            {
                break;
            }
            if(board[rookRow][j]=='p')
            {
                numPawns++;
                break;
            }
        }
        return numPawns++;
        
        
    }
};