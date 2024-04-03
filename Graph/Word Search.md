<h1><a href="https://leetcode.com/problems/word-search/description/" target="blank">Word Search</a></h1>


## METHOD 1 

```cpp

 bool search(int ind, int i, int j, string word,vector<vector<char>>& board )
    {
        if(ind == word.size())
            return true;

        if(i<0 || j<0 || i>=board.size() || j>=board[0].size())
            return false;

        if(board[i][j]!=word[ind])
            return false;

        char orgChar = board[i][j];
        board[i][j] = '*';

        bool ans = (search(ind+1,i-1,j,word,board) || search(ind+1,i,j-1,word,board) || 
                    search(ind+1,i+1,j,word,board) || search(ind+1,i,j+1,word,board));

        board[i][j] = orgChar;
        
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size();
        int m = board[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j = 0;j<m ; j++)
            {
                if(board[i][j]==word[0])
                    if(search(0,i,j,word,board))
                        return true;
            }
        }

        return false;
    }

```