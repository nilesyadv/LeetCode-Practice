class Solution {
    #define ll long long
public:
    int minMoves2(vector<int>& nums) {
        ll totalSum=0,n=nums.size(),currSum=0;
        for(int i=0;i<n;i++) totalSum+=nums[i];
        sort(nums.begin(),nums.end());
        
        ll ans=10000000000,possibleAns=0;
        for(ll i=0;i<n;i++)
        {
            currSum+=nums[i];
            ll leftSum=currSum-nums[i];
            ll rightSum=totalSum-currSum;
            possibleAns=i*nums[i]-leftSum+rightSum-nums[i]*(n-i-1);
            ans=min(ans,possibleAns);
        }
        return ans;
    }
};