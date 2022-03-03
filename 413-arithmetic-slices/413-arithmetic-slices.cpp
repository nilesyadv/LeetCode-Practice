class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int i=0,j=1;
        if(n==1) return 0;
        int d=nums[j]-nums[i];
        while(j<n)
        {
            if(nums[j]-nums[j-1]==d)
            {
                j++;
                continue;
            }
            
            int total=j-i;
            if(total>=3)
            {
                int k=total-3+1;
                ans=ans+(k*(k+1))/2;
            }
            d=nums[j]-nums[j-1];
            i=j-1;
        }
        
        int total=j-i;
        if(total>=3)
        {
            int k=total-3+1;
            ans=ans+(k*(k+1))/2;
        }
        
        return ans;
        
    }
};