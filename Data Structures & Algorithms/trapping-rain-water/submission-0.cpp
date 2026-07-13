class Solution {
public:
    int trap(vector<int>& nums) {

        int n=nums.size();
        vector<int> pre(n);
        vector<int> suff(n);

        int ans=0;
        pre[0]=nums[0];
        suff[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            pre[i]=max(pre[i-1],nums[i]);
            suff[n-i-1]=max(suff[n-i],nums[n-i-1]);
        }

        for(int i=0;i<n;i++)
        {
            int m=min(pre[i],suff[i]);
            if(m-nums[i]>0)
                ans+=(m-nums[i]);
        }
        return ans;
        
    }
};
