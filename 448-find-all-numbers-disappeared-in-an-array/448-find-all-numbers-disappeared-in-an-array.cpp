class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
            while(nums[i]!=i+1 && nums[nums[i]-1]!=nums[i]) swap(nums[i],nums[nums[i]-1]);
        
        for(int i=0;i<n;i++) if(nums[i]!=i+1) ans.push_back(i+1);
        return ans;
    }
};