class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int majority=nums[0],curr=1;
       for(int i=1;i<nums.size();i++)
       {
           if(curr==0) majority=nums[i];
           if(nums[i]==majority) curr++;
           else curr--;
       }
        return majority;
    }
};