class Solution {
public:
    bool solve(vector<vector<char>>& board, string word,int p,int i,int j)
    {
        if(p==word.size())
            return true;
        if(i<0 || j<0 || i==board.size() || j==board[0].size())
            return false;
        bool ret=false;
        if(board[i][j]==word[p])
        {
            char ch=board[i][j];
            board[i][j]='%';
            ret=solve(board,word,p+1,i+1,j) || solve(board,word,p+1,i-1,j) || solve(board,word,p+1,i,j+1) || solve(board,word,p+1,i,j-1);
            board[i][j]=ch;
        }
        return ret;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                     
                if(board[i][j]==word[0] && solve(board,word,0,i,j))
                    return 1;
            }
        }
        return false;
    }
};