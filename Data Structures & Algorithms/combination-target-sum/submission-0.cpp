class Solution {
public:
    void f(int i,int target,int n,vector<int>& nums,vector<int> v,map<vector<int>,int>& m)
    {
        if(target==0)
        {
            m[v]+=1;
            return;
        }
        if(i>=n)
            return ;

        if(nums[i]<=target)
        {
            v.push_back(nums[i]);
            f(i,target-nums[i],n,nums,v,m);
            f(i+1,target-nums[i],n,nums,v,m);
            v.pop_back();
        }
        f(i+1,target,n,nums,v,m);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        int n=nums.size();
        vector<int> v;
        map<vector<int>,int> m;
        vector<vector<int>> ans;
        f(0,target,n,nums,v,m);

        for(auto it:m)
            ans.push_back(it.first);
        return ans;
        
    }
};
