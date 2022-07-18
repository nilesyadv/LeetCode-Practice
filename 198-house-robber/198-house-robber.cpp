class Solution {
public:
    int rob(vector<int>& nums) {
        int take = nums[0], not_take = 0;
        
        for (int i = 1; i < nums.size(); i++)
        {
            int temp1 = not_take;
            int temp2 = take;
            not_take = max(temp1, temp2);
            take = temp1 + nums[i];
        }
        
        return max(take, not_take);
    }
};