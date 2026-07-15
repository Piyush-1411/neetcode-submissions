class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<string> s;
        int n=tokens.size();
        for(int i=0;i<n;i++)
        {
            string k=tokens[i];
            if(k=="*" || k=="+" || k=="-" || k=="/")
            {
                int a=stoi(s.top());
                s.pop();
                int b=stoi(s.top());
                s.pop();

                if(k=="*")
                    s.push(to_string(a*b));
                else if(k=="/")
                    s.push(to_string(b/a));
                else if((k=="-"))
                    s.push(to_string(b-a));
                else
                    s.push(to_string(a+b));
            }
            else
                s.push(k);
        }
        int l=stoi(s.top());
        return l;
    }
};
