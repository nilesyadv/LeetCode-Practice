class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        int index = 1, curr = 0, next = 1;
        while(next < nums.size())
        {
            if(nums[next] != nums[curr])
            {
                nums[index] = nums[next];
                index++;
                curr = next;
            }
            next++;
        }
        return index;
    }
};