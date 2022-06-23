class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        
        int n=courses.size();
        priority_queue<int> p;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++) v.push_back({courses[i][1],courses[i][0]});
        
        sort(v.begin(),v.end());
        int currtime=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(currtime+v[i].second<=v[i].first)
            {
                currtime+=v[i].second;
                p.push(v[i].second);
                ans++;
            }
            else
            {
                if(p.size()!=0 && p.top()>=v[i].second)
                {
                    currtime-=(p.top()-v[i].second);
                    p.pop();
                    p.push(v[i].second);
                }
            }
        }
    
        return ans;
    }
};