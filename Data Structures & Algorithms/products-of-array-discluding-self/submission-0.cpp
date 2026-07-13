class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();
        if(n==1)
            return nums;
        vector<int> pre(n);
        vector<int> suff(n);
        vector<int> ans(n);
        pre[0]=nums[0];
        suff[n-1]=nums[n-1];
        
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]*nums[i];
            suff[n-i-1]=suff[n-i]*nums[n-i-1];
            cout<<pre[i]<<suff[n-i-1]<<endl;
        }

        ans[0]=suff[1];
        ans[n-1]=pre[n-2];

        for(int i=1;i<n-1;i++)
        {
            ans[i]=pre[i-1]*suff[i+1];
        }

        return ans;

    }
};
