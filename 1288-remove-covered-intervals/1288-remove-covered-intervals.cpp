class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            bool flag=true;
            for(int j=0;j<n;j++)
            {
                if(i!=j && intervals[i][0]>=intervals[j][0] && intervals[i][1]<=intervals[j][1])
                {
                    flag=false;
                    break;
                }
            }
            if(flag) ans++;
        }
        
        return ans;
    }
};