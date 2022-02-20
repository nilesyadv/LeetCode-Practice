class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int ans=1;
        sort(intervals.begin(),intervals.end());
        
        int lo=intervals[0][0],hi=intervals[0][1];
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]==lo) hi=intervals[i][1];
            else
            {
                if(intervals[i][1]>hi)
                {
                    ans++;
                    lo=intervals[i][0];
                    hi=intervals[i][1];
                }
            }
        }
        
        return ans;
    }
};