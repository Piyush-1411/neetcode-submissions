class Solution {
public:

    string encode(vector<string>& strs) {

        int n=strs.size();
        string s="";

        for(int i=0;i<n;i++)
        {
            s+=to_string(strs[i].size());
            s+='#';
            s+=strs[i];
        }
        cout<<s;
        return s;
    }

    vector<string> decode(string s) {

        int n=s.size();
        int i=0;
        vector<string> ans;
        string k="";
        while(i<n)
        {
            while(s[i]!='#')
            {
                k+=s[i];
                i++;
            }
            int z=stoi(k);
            k="";
            string l=s.substr(i+1,z);
            ans.push_back(l);
            i+=z+1;
        }
        return ans;
    }
};
