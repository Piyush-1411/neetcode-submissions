class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n=s1.size();
        int m=s2.size();

        int j=n-1;
        map<char,int> m1;
        map<char,int> m2;

        for(int i=0;i<n;i++)
            m1[s1[i]]+=1;
        
        for(int i=0;i<=j;i++)
            m2[s2[i]]+=1;

        if(m1==m2)
            return true;
        int i=0;
        while(j<m)
        {
            m2[s2[i]]-=1;
            if(m2[s2[i]]==0)
                m2.erase(s2[i]);
            i++;
            j++;
            m2[s2[j]]+=1;
            if(m1==m2)
                return true;

        }
        return false;
    }
};
