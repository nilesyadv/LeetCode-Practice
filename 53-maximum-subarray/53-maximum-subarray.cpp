class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int j=0,sum=0,ans=-10000;
      
        while(j<nums.size())
        {
            sum=sum+nums[j++];
            if(sum<=0)
            {
                ans=max(ans,sum);
                sum=0;
            }
            else ans=max(ans,sum);
        }
        return ans; 
    }
};