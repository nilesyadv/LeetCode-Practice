class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0,sum=0,ans=0;
        unordered_set<int> s;
        while(j<n)
        {
            if(s.find(nums[j])==s.end())
            {
                sum+=nums[j];
                ans=max(ans,sum);
                s.insert(nums[j]);
                j++;
            }
            else
            {
                while(s.find(nums[j])!=s.end())
                {
                    s.erase(nums[i]);
                    sum-=nums[i];
                    i++;
                }
            }
        }
        
        return ans;
    }
};