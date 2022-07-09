class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        
        priority_queue<pair<int,int>> p;
        int n=nums.size();
        
        int dp[n]; dp[0]=nums[0];
        p.push({dp[0],0});
        
        for(int i=1;i<n;i++)
        {
            while(p.top().second<i-k) p.pop();
            dp[i]=nums[i]+p.top().first; 
            p.push({dp[i],i});
        }
        
        return dp[n-1];
    }
};