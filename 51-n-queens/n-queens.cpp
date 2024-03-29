class Solution {
public:

    bool is_safe(int row,int col,int n,vector<string> board)
    {
        int r=row;
        int c=col;
        while(row>=0 && col>=0 )
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            col--;
            row--;
        }
        row=r;
        col=c;
        while(col>=0)
        {

            if(board[row][col]=='Q')
            {
                return false;
            }
            col--;
        }
        row=r;
        col=c;
        while(col>=0 && row<n)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            col--;
            row++;
        }
        return true;
    }
    void get(int col,int n,vector<vector<string>> &ans,vector<string> &board)
    {
        if(col==n)
        {
            ans.push_back(board);
            return ;
        }
        for(int row=0;row<n;row++)
        {
            if(is_safe(row,col,n,board))
            {
                board[row][col]='Q';
                get(col+1,n,ans,board);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        vector<string>  board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        get(0,n,ans,board);
        return ans;
    }
};