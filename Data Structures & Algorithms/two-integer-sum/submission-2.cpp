class Solution {
public:
    vector<int> twoSum(vector<int>& nums1, int target) {

        int n=nums1.size();
        int i=0,j=n-1;
        vector<pair<int,int>> nums;
        for(int i=0;i<n;i++)
            nums.push_back({nums1[i],i});
        sort(nums.begin(),nums.end());

        while(i<j)
        {
            int s=nums[i].first+nums[j].first;
            if(s==target)
                return {min(nums[i].second,nums[j].second),max(nums[i].second,nums[j].second)};
            else if(s>target)
                j--;
            else
                i++;
        }
        return {};
    }
};
