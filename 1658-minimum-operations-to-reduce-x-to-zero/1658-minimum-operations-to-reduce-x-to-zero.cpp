#define sp " "
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int sum=0,n=nums.size();
        for(int i=0;i<n;i++) sum+=nums[i];
        int target=sum-x,i=0,curr_sum=0,maxlength=0;
        bool found=false;
        for(int j=0;j<n;j++)
        {
            curr_sum+=nums[j];
            while(curr_sum>target && i<=j) 
            {
                curr_sum-=nums[i];
                i++;
            }
            
            if(curr_sum==target)
            {
                maxlength=max(maxlength,j-i+1);class Solution {
   public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0, n = nums.size();
        for (int i : nums) sum += i;
        int target = sum - x;
        int curr_sum = 0, max_len = 0;
        int start_idx = 0;
        bool found = false;
        for (int end_idx = 0; end_idx < n; end_idx++) {
            curr_sum += nums[end_idx];
            while (start_idx <= end_idx && curr_sum > target) {
                curr_sum -= nums[start_idx];
                start_idx += 1;
            }
            if (curr_sum == target) {
                found = true;
                max_len = max(max_len, end_idx - start_idx + 1);
            }
        }
        return found ? n - max_len : -1;
    }
};
                found=true;
            }
        }
        
        if(found) return n-maxlength;
        else return -1;
    }
};