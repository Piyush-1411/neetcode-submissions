class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n=heights.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<j)
        {
            int k=(min(heights[i],heights[j])*(j-i));
            ans=max(ans,k);
            if(heights[i]>heights[j])
                j--;
            else
                i++;
        }
        return ans;
    }
};
