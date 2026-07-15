class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        int n=speed.size();
        vector<pair<int,int>> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back({position[i],speed[i]});
        }
        int c=1;
        sort(ans.begin(),ans.end());
        double prev=(double)(target-ans[n-1].first)/ans[n-1].second;

        for(int i=n-2;i>=0;i--)
        {
            double curr=(double)(target-ans[i].first)/ans[i].second;
            if(prev<curr)
            {
                c++;
                prev=curr;
            }
        }
        return c;
    }
};
