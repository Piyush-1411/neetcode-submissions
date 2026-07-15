class Solution {
public:
    bool isValid(string s) {

        int n=s.size();
        stack<char> s1;
        if(n==1)
            return false;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='[' || s[i]=='{' || s[i]=='(')
                s1.push(s[i]);
            else
            {
                if(!s1.empty())
                {
                    if(s1.top()=='(' && s[i]==')' || s1.top()=='{' && s[i]=='}' || s1.top()=='[' && s[i]==']')
                        s1.pop();
                    else
                        return false;
                }
                else
                    return false;
            }
        }
        if(s1.empty())
            return true;
        return false;
    }
};
