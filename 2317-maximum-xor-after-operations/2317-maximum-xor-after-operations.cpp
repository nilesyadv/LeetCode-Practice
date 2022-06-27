class Solution {
    long long ans=0;
public:
    int maximumXOR(vector<int>& nums) {
        
        for(long long i=0;i<=31;i++)
        {
            int cnt=0;
            for(int j=0;j<nums.size();j++)
                if(nums[j]&(1LL<<i)) cnt++;
    
            if(cnt)
                ans=ans+(1LL<<i);
        }
        
        return ans;
    }
};