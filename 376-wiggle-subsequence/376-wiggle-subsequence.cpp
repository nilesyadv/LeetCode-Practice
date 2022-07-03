class Solution
{
public:
    int wiggleMaxLength(vector<int> &nums)
    {
        int n = nums.size();
        int cnt1=1,cnt2=1;
        for(int i=1;i<n;i++)
        {
            if(cnt1%2)
            {
                if(nums[i]>nums[i-1])
                {
                    cnt1++;
                }
            }
            else
            {
                if(nums[i]<nums[i-1])
                {
                    cnt1++;
                }
            }
        }
        
        for(int i=1;i<n;i++)
        {
            if(cnt2%2)
            {
                if(nums[i]<nums[i-1])
                {
                    cnt2++;
                }
            }
            else
            {
                if(nums[i]>nums[i-1])
                {
                    cnt2++;
                }
            }
        }
        
        return max(cnt1,cnt2);
    }
};