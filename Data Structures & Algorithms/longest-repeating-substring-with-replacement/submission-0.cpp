class Solution {
public:
    int characterReplacement(string s, int k) {

        int n=s.size();
        map<char,int> m;
        int i=0,j=0,ma=0,ans=0;
        
        while(j<n)
        {
            m[s[j]]+=1;
            ma=max(ma,m[s[j]]);

            if(((j-i+1)-ma)>k)
            {
                while(((j-i+1)-ma)>k)
                {
                    m[s[i]]-=1;
                    if(m[s[i]]==0)
                        m.erase(s[i]);
                    i++;
                }
            }
            else
                ans=max(ans,(j-i+1));
            j++;
        }
        return ans;

        
    }
};
