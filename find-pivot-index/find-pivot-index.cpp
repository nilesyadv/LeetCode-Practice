class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1;
        int left_sum=0,right_sum=0;
        
        for(int i=0;i<nums.size();i++) right_sum=right_sum+nums[i];
 
        for(int i=0;i<nums.size();i++)
        {
            right_sum=right_sum-nums[i];
            if(left_sum==right_sum) 
            {
                ans=i; break;
            }
            left_sum=left_sum+nums[i];
        }
        
        return ans;
    }
};