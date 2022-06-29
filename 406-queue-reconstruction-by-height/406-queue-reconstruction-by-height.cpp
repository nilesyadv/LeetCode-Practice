class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();
        vector<vector<int>> v(n,vector<int> (2,-1));
        unordered_map<int,int> m;
        sort(people.begin(),people.end());
        // for(int i=0;i<n;i++)
        // {
        //     cout<<people[i][0]<<"<->"<<people[i][1]<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<n;i++)
        {
            int cnt=1,k=people[i][1]+1-m[people[i][0]];
            m[people[i][0]]++;
            for(int j=0;j<n;j++)
            {
                if(cnt==k && v[j][0]==-1) 
                {
                    v[j][0]=people[i][0];
                    v[j][1]=people[i][1];
                    //cout<<cnt<<" "<<j<<endl;;
                    break;
                }
                if(v[j][0]==-1) cnt++;
            } 
        }
        return v;
    }
};