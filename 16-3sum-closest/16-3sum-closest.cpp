class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       int ans = nums[0] + nums[1] + nums[2];
        int diff = abs((nums[0] + nums[1] + nums[2]) - target);
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            int j = i+1, k = nums.size() - 1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                int difference = abs(sum - target);
                if(difference < diff)
                {
                    diff = difference;
                    ans = sum;
                }
                if(sum > target) k--;
                else if(sum < target) j++;
                else return sum;
            }
        }
        
        return ans;
        
    }
}; 