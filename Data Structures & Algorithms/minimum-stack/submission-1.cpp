class MinStack {
public:
    stack<int> s;
    MinStack() {
       
        
    }
    
    void push(int val) {

        s.push(val);
    }
    
    void pop() {
        if(!s.empty())
            s.pop();        
    }
    
    int top() {
        
        if(!s.empty())
            return s.top();
        
        
    }
    
    int getMin() {

        vector<int> v;
        int m=INT_MAX;
        while(!s.empty())
        {v.push_back(s.top());
        m=min(s.top(),m);
        s.pop();}

        for(int i=v.size()-1;i>=0;i--)
        {
            s.push(v[i]);
        }
        return m;
    }
};
