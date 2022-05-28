class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            ans=ans^nums[i-1];
            ans=ans^i;
        }
        return ans;
    }
};