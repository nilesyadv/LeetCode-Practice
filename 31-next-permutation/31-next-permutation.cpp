class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       
        int pos1=-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                pos1=i;
                break;
            }
        }
        
        if(pos1==-1) 
        {
            sort(nums.begin(),nums.end());
            return;
        }
        
        int pos2=pos1;
        for(int i=pos1;i<nums.size();i++)
        {
            if(nums[i]>nums[pos1])         
                    pos2=i;
        }
        
        swap(nums[pos1],nums[pos2]);
        sort(nums.begin()+pos1+1,nums.end());
    }
};