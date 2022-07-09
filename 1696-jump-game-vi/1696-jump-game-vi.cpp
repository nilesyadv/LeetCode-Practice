class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        
        set<pair<int,int>, greater<pair<int,int>>> s;
        int n=nums.size();
        
        int dp[n]; dp[0]=nums[0];
        s.insert({dp[0],0});
        
        for(int i=1;i<n;i++)
        {
            if(s.size()>k) s.erase({dp[i-k-1],i-k-1});
            
            pair<int,int> p=*s.begin();
            dp[i]=nums[i]+p.first; 
            
            s.insert({dp[i],i});
        }
        
        return dp[n-1];
    }
};