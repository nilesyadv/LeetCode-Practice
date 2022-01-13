class Solution {
public:
    int findMin(vector<int>& nums) {
        int sz=nums.size();
        if(nums[0]<nums[sz-1]) return nums[0];
        
        int s=0,e=sz-1;
        int mid=s+(e-s)/2;
        while(s<e)
        {
            if(nums[mid]>=nums[0])
            {
                s=mid+1;
            }
            else if(nums[mid]<nums[0])
            {
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        
        return nums[mid];
    }
};