class Solution {
public:
    void f(int i,int n,vector<int>& nums,map<vector<int>,int>& m,vector<int> v)
    {
        if(i==n)
        {
            m[v]+=1;
            return ;
        }
        v.push_back(nums[i]);
        f(i+1,n,nums,m,v);
        v.pop_back();
        f(i+1,n,nums,m,v);
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        int n=nums.size();
        map<vector<int>,int> m;

        vector<int> v;
        f(0,n,nums,m,v);
        vector<vector<int>> ans;
        for(auto it:m)
        {
            ans.push_back(it.first);
        }
        return ans;
    }
};
