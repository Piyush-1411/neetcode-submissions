class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        priority_queue<pair<int,char>> q;
        map<char,int> m;
        int ans=0;

        for(int i=0;i<tasks.size();i++)
        {
            m[tasks[i]]+=1;
        }

        for(auto it:m)
            q.push({it.second,it.first});

        while(!q.empty())
        {
            int k=0;
            map<char,int> m1;
            for(int i=0;i<n+1 && !q.empty();i++)
            {
                char c=q.top().second;
                int f=q.top().first;
                q.pop();
                f--;
                if(f!=0)
                    m1[c]+=f;
                k++;
                
            }

            for(auto it:m1)
            {
                q.push({it.second,it.first});
            }
            if(q.empty())
                ans+=k;
            else
                ans+=n+1;
            
        }  
        return ans;      
    }
};
