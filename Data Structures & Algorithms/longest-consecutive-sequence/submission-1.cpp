class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        sort(nums.begin(),nums.end());
        int prev=INT_MIN,c=1,ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]-prev==1 || prev==nums[i])
            {
                if(prev==nums[i])
                    continue;
                prev=nums[i];
                c++;
            }
            else
            {
                prev=nums[i];
                ans=max(c,ans);
                c=1;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};
