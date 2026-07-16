class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vis,int n,int m)
    {
        vis[i][j]=1;
        int up=0,down=0,right=0,left=0;
        if(i+1<n && !vis[i+1][j] && grid[i+1][j]==1)
            down=dfs(i+1,j,grid,vis,n,m);
        if(j+1<m && !vis[i][j+1] && grid[i][j+1]==1)
            right=dfs(i,j+1,grid,vis,n,m);
        if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]==1)
            up=dfs(i-1,j,grid,vis,n,m);
        if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]==1)
            left=dfs(i,j-1,grid,vis,n,m);

        return 1+up+left+down+right;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                    q.push({i,j});
            }
        }
        int ans=0;
        while(!q.empty())
        {
            int i=q.front().first;
            int j=q.front().second;

            q.pop();
            if(!vis[i][j])
            {
                ans=max(ans,dfs(i,j,grid,vis,n,m));
            }
        }
        return ans;
    }
};
