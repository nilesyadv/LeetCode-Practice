class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int ans = 0;
        int diff = 1000000000;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int j = i + 1, k = nums.size() - 1;
            int sum = nums[i];
            bool flag = false;
            //cout<<nums[i]<<endl;
            while(j < k)
            {
                sum = nums[i];
                //cout<<nums[j]<<" "<<nums[k]<<endl;
                sum += nums[j] + nums[k];
                if(abs(sum - target < diff))
                {
                    ans = sum;
                    diff = abs(sum - target);
                }
                //cout<<nums[j]<<" "<<nums[k]<<" ans->"<<ans<<endl;
                if(sum > target)
                {
                    k--;
                }
                else if(sum < target) 
                {
                    j++;
                }
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