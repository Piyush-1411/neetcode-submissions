class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        stack<int> s;
        int n=temperatures.size();
        
        vector<int> v(n);
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty())
            {
                v[i]=0;
            }
            while(!s.empty() && temperatures[s.top()]<=temperatures[i])
                s.pop();

            if(s.empty())
                v[i]=0;
            else
                v[i]=s.top();
            s.push(i);
            if(v[i]!=0)
                v[i]=v[i]-i;
        }
        return v;
    }
};
