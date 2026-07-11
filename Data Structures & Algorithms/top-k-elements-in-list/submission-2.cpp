class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n=nums.size();
        if(n==1)
            return {nums[0]};
        
        map<int,int> m;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }

        for(auto it:m)
        {
            q.push({it.second,it.first});
            if(q.size()>k)
                q.pop();
        }

        vector<int> ans;
        while(!q.empty())
        {
            int a=q.top().second;
            ans.push_back(a);
            q.pop();
        }
        return ans;
        
    }
};
