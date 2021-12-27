class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans,k;
        for(int i=0;i<nums.size();i++)
        {
            int start=i+1;
            int end=nums.size()-1;
            int target=-nums[i];
           while(start<end)
            {
                if(nums[start]+nums[end]<target)
                {
                    start++;
                }
                else if(nums[start]+nums[end]>target)
                {
                    end--;
                }
                else if(nums[start]+nums[end]==target)
                {
                    vector<int> triplet={nums[i],nums[start],nums[end]};
                     ans.push_back(triplet);
                    while(start<end && nums[start]==triplet[1]) start++;
                    while(start<end && nums[end]==triplet[2]) end--;
                }
            }
            while(i+1<nums.size() && nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};