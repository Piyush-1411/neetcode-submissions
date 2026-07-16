class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                    q.push({1,{i,j}});
            }
        }

        while(!q.empty())
        {
            int d=q.top().first;
            int i=q.top().second.first;
            int j=q.top().second.second;

            q.pop();

            if(i+1<n && grid[i+1][j]==INT_MAX)
            {
                grid[i+1][j]=d;
                q.push({d+1,{i+1,j}});
            }
            if(j+1<m && grid[i][j+1]==INT_MAX)
            {
                grid[i][j+1]=d;
                q.push({d+1,{i,j+1}});
            }
            if(i-1>=0 && grid[i-1][j]==INT_MAX)
            {
                grid[i-1][j]=d;
                q.push({d+1,{i-1,j}});
            }
            if(j-1>=0 && grid[i][j-1]==INT_MAX)
            {
                grid[i][j-1]=d;
                q.push({d+1,{i,j-1}});
            }
        }
        
    }
};
