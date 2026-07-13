class Solution {
public:
    bool isPalindrome(string k) {

        int n=k.size();
        string s="";
        for(int i=0;i<n;i++)
        {
            if(k[i]>=97 && k[i]<=122 || k[i]>=65 && k[i]<=90 || k[i]>=48 && k[i]<=57)
                s+=tolower(k[i]);
        }
        cout<<s<<endl;
        int n1=s.size();
        for(int i=0;i<n1/2;i++)
        {
            if(s[i]!=s[n1-i-1])
                return false;
        }
        return true;
    }
};
