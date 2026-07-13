class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.size();
        int i=0,j=0;
        int ans=0;
        map<char,int> m;

        while(j<n)
        {
            m[s[j]]+=1;
            if(m[s[j]]>1)
            {
                while(s[i]!=s[j])
                {
                    m[s[i]]-=1;
                    if(m[s[i]]==0)
                        m.erase(s[i]);
                    i++;
                }
                m[s[i]]-=1;
                if(m[s[i]]==0)
                    m.erase(s[i]);
                i++;
            }
            else
            {
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;

    }
};
