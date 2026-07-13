class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<map<int,int>> rows(9);
        vector<map<int,int>> cols(9);
        vector<map<int,int>> sq(9);

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    int k=board[i][j];
                    if(rows[i].find(k)!=rows[i].end() || cols[j].find(k)!=cols[j].end()|| sq[(i/3)*3+j/3].find(k)!=sq[(i/3)*3+j/3].end())
                        return false;
                    rows[i][board[i][j]]+=1;
                    cols[j][board[i][j]]+=1;
                    sq[(i/3)*3+j/3][board[i][j]]+=1;
                }
            }
        }
        return true;
        
    }
};
