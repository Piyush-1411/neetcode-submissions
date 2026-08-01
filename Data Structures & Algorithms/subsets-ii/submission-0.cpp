class Solution {
public:
    void f(int i,int n,vector<int> nums,vector<int> v,map<vector<int>,int>& m)
    {
        if(i==n)
        {
            m[v]+=1;
            return;
        }
        v.push_back(nums[i]);
        f(i+1,n,nums,v,m);
        v.pop_back();
        f(i+1,n,nums,v,m);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        int n=nums.size();
        sort(nums.begin(),nums.end());
        map<vector<int>,int> m;
        vector<vector<int>> ans;
        f(0,n,nums,{},m);

        for(auto it:m)
        {
            ans.push_back(it.first);
        }

        return ans;
        
    }
};
