#define sp " "
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int sum=0,n=nums.size();
        for (int i : nums) sum += i;
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
                maxlength=max(maxlength,j-i+1);
                found=true;
            }
        }
        
        if(found) return n-maxlength;
        else return -1;
    }
};