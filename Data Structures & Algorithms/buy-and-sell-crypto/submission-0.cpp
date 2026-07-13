class Solution {
public:
    int maxProfit(vector<int>& nums) {

        int ans=0;
        int n=nums.size();
        int prev=nums[0];

        for(int i=1;i<n;i++)
        {
            if(nums[i]>prev)
                ans=max(ans,nums[i]-prev);
            else
            {
                prev=nums[i];
            }
        }
        return ans;
    }
};
