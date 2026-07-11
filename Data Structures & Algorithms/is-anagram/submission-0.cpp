class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int> m1(26,0);
        vector<int> m2(26,0);
        int n=s.size();
        if(t.size()!=n)
            return false;

        for(int i=0;i<n;i++)
        {
            m1[s[i]-'a']++;
            m2[t[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(m1[i]!=m2[i])
                return false;
        }
        return true;
        
    }
};
