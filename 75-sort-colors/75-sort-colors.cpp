class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j=0,k=nums.size()-1;
        for(int i=0;i<=k;)
        {
            if(nums[i]==0) swap(nums[i++],nums[j++]);
            else if(nums[i]==1) i++;
            else if(nums[i]==2) swap(nums[i],nums[k--]);
        }
        
    }
};