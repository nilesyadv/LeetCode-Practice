class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int j=0,sum=0,ans=-10000;
      
        while(j<nums.size())
        {
            sum=sum+nums[j++];
            ans=max(ans,sum);
            if(sum<=0) sum=0;
        }
        return ans; 
    }
};