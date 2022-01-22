class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0,rem;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            {
                cnt++; rem=i;
            }
        }
        if(cnt>1) return false;
        if(cnt==0) return true;
        if(nums[nums.size()-1]<=nums[0]) return true;
        return false;
    }
};