class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int ans = 0;
        int diff = 1000000000;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int j = i + 1, k = nums.size() - 1;
            bool flag = false;
    
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(sum - target < diff))
                {
                    ans = sum;
                    diff = abs(sum - target);
                }
                
                if(sum > target) k--;
                else if(sum < target) j++;
                else
                {
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        return ans;
        
    }
}; 