class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;)
        {
            for(int j=i+1;j<n-2;)
            {
                int left=j+1,right=n-1;
                long long aim=(0LL+target)-(0LL+nums[i]+nums[j]);
                while(left<right)
                {
                    if(nums[left]+nums[right]==aim)
                    {
                        vector<int>v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[left]);
                        v.push_back(nums[right]);
                        ans.push_back(v);
                        int a=nums[left];
                        while(left<n-1 && nums[left]==a) left++;
                        int b=nums[right];
                        while(right>=left && nums[right]==b) right--;
                    }
                    else if(nums[left]+nums[right]<aim)left++;
                    else right --;
                }
                int a=nums[j];
                while(j<n-2 && nums[j]==a) j++; 
            }
             int a=nums[i];
             while(i<n-3 && nums[i]==a) i++;
        }
    
        return ans;
           
    }
};