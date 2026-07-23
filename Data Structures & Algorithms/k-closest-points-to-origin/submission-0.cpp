class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<pair<double,pair<int,int>>> q;
        vector<vector<int>> ans;
        int n=points.size();

        for(int i=0;i<n;i++)
        {
            double d=0.0;
            int x=points[i][0];
            int y=points[i][1];

            d=sqrt(x*x+y*y);
            q.push({d,{x,y}});
            if(q.size()>k)
                q.pop();
        }

        while(!q.empty())
        {
            int x=q.top().second.first;
            int y=q.top().second.second;
            q.pop();

            ans.push_back({x,y});
        }
        return ans;
    }
};
