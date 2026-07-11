class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int n=strs.size();
        vector<map<char,int>> m(n);
        

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<strs[i].size();j++)
            {
                m[i][strs[i][j]]++;
            }
        }
        vector<vector<string>> ans;
        vector<int> vis(n,-1);
        for(int i=0;i<n;i++)
        {
            vector<string> v;
            v.push_back(strs[i]);
            if(vis[i]!=-1)
                continue;
            vis[i]=1;
            for(int j=i;j<n;j++)
            {
                if(m[i]==m[j] && vis[j]==-1)
                {
                    vis[j]=1;
                    v.push_back(strs[j]);
                }
            }
            ans.push_back(v);
        }
        return ans;
        
    }
};
