class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        map<int,int> m;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            if(m.find(nums[i])!=m.end())
                return true;
            m[nums[i]]+=1;
        }
        return false;
    }
};