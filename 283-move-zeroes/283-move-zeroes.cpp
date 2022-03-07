class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int t=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=0) nums[t++]=nums[i];
        
        for(;t<nums.size();t++) nums[t]=0;
        
    }
};