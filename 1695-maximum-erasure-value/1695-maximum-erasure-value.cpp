class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0,sum=0,ans=0;
        unordered_map<int,int> m;
        while(j<n)
        {
            if(m[nums[j]]==0)
            {
                sum+=nums[j];
                ans=max(ans,sum);
                m[nums[j]]++;
                j++;
            }
            else
            {
                while(m[nums[j]]!=0)
                {
                    m[nums[i]]--;
                    sum-=nums[i];
                    i++;
                }
            }
        }
        
        return ans;
    }
};