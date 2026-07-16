class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& vis,int n,int m)
    {
        vis[i][j]=1;
        if(i+1<n && !vis[i+1][j] && grid[i+1][j]=='1')
            dfs(i+1,j,grid,vis,n,m);
        if(j+1<m && !vis[i][j+1] && grid[i][j+1]=='1')
            dfs(i,j+1,grid,vis,n,m);
        if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]=='1')
            dfs(i-1,j,grid,vis,n,m);
        if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]=='1')
            dfs(i,j-1,grid,vis,n,m);
    }

    int numIslands(vector<vector<char>>& grid) {

        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> vis(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                    q.push({i,j});
            }
        }
        int c=0;
        while(!q.empty())
        {
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(!vis[i][j])
            {
                c++;
                dfs(i,j,grid,vis,n,m);
            }
        }
        return c;

        
    }
};
