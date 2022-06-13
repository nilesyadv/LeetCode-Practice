class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        unordered_map<int,pair<int,int>> m;
        int sum=0,n=nums.size();
        for(int i=n-1;i>=0;i--)
        {
            sum+=nums[i];
            m[sum]={1,i};
        }
        
        if(x<nums[0] && x<nums[n-1]) return -1;
        if(sum==x) return n;
        
        int ans=1000000;
        if(m[x].first==1) ans=min(ans,n-m[x].second);
        sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum>x) break;
            if(sum==x)
            {
                ans=min(ans,i+1);
            }
            else
            {
                int y=x-sum;
                if(m[y].first==1 && m[y].second>i)
                    ans=min(ans,i+1+n-m[y].second);
            }  
        }
        
        if(ans==1000000) return -1;
        else return ans;
    }
};