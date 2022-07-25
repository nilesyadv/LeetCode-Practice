class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int start=-1,end=-1;
        bool flag=true;
        for(int i=0;i<nums.size();i++)
        {
            if(flag && nums[i] == target) {start = i; flag = false;}
            if(nums[i] == target) end = i;
        }
        
        return {start, end};
    }
};