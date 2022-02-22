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
        
        int mini=100,pos2=0;
        for(int i=pos1;i<nums.size();i++)
        {
            if(nums[i]>nums[pos1])
            {
                if(nums[i]<mini)
                {
                    pos2=i;
                    mini=nums[i];
                }
            }
        }
        
        swap(nums[pos1],nums[pos2]);
        sort(nums.begin()+pos1+1,nums.end());
    }
};